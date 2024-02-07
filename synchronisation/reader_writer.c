#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<pthread.h>
int rc=0;
#include<semaphore.h>
sem_t m,wrt;
void *w(void *v)
{
	sleep(3);
	sem_wait(&wrt);
	printf("writer is functioning\n");
	printf("writer terminated\n");
	sem_post(&wrt);
}
void *r(void *v)
{
	int r=(int)v;
 	sleep(1);
	sem_wait(&m);
	rc++;
	if(rc==1)
	sem_wait(&wrt);
	sem_post(&m);
	printf("reader %d is functioning\n",r);
	sem_wait(&m);
 	rc--;
 	printf("reader %d terminated\n",r);
	if(rc==0)
	sem_post(&wrt);
	sem_post(&m);

}
void main()
{
	sem_init(&m,1,1);
	sem_init(&wrt,1,1);
	pthread_t t1[5],i;
	for(i=0;i<4;i++)
	pthread_create(&t1[i], NULL,r, (void *)i);
	pthread_create(&t1[i], NULL,w, (void *)i);
	for(i=0;i<5;i++)
	pthread_join(t1[i], NULL);
	exit(0);
}
