#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<pthread.h>
int t=0;
void *p0(void *vargp)
{
	while(1)
	{
		sleep(1);
		while(t!=0);
		printf("p0 is in critical section\n");
		t=1;
	}
}
void *p1(void *vargp)
{
	while(1)
	{
		sleep(1);
		while(t!=1);
		printf("p1 is in critical section\n");
		t=0;
	}
}
void main()
{
	pthread_t t1,t2;
	pthread_create(&t1, NULL,p0, NULL);
	pthread_create(&t2, NULL,p1, NULL);
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	 exit(0);
}
