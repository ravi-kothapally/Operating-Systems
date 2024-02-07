#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<pthread.h>
int empty=5,full=0,mutex=1;
void wai(int *s)
{
	while(*s<=0);
	*s=*s-1;
}
void signa(int *s)
{
	*s=*s+1;
}
void *p(void * v)
{
	do
	{
		sleep(1);
	wai(&empty);
	wai(&mutex);
	printf("item added\n");
	signa(&mutex);
	signa(&full);
	}
	while(1);
}
void *c(void * v)
{
	do
	{
		sleep(3);
	wai(&full);
	wai(&mutex);
	printf("item removed\n");
	signa(&mutex);
	signa(&empty);
	}
	while(1);
}
void main()
{
	pthread_t t1,t2;
	pthread_create(&t1, NULL,p, NULL);
	pthread_create(&t2, NULL,c, NULL);
	pthread_join(t2, NULL);
	pthread_join(t1, NULL);
	exit(0);
}
