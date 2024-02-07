#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<pthread.h>
#include<semaphore.h>
sem_t c[5];
void *eatl(void * v)
{
	int p1,p=(int )v;
	p1=p;
	int p2=(p+1)%5;
	if(p==4)
	{
		p1=0;
		p2=4;
	}
	printf("philosopher %d is waiting\n",p);
	sem_wait(&c[p1]);
	printf("philosopher %d got one stick\n",p);
	sem_wait(&c[p2]);
	printf("philosopher %d got two sticks and started eating\n",p);
	sem_post(&c[p1]);
	printf("philosopher %d leaved one stick\n",p);
	sem_post(&c[p2]);
	printf("philosopher %d leaved two sticks\n",p);
}
void main()
{
	pthread_t t1[5];
	int i;
	for(i=0;i<5;i++)
	sem_init(&c[i],1,1);
	for(i=0;i<5;i++)
	pthread_create(&t1[i], NULL,eatl, (void *)i);
	for(i=0;i<5;i++)
	pthread_join(t1[i], NULL);
	exit(0);
}
