#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include<pthread.h>
int t=0,f[2]={0,0};
void *p0(void *vargp)
{
	while(1)
	{
  		sleep(1);
  		f[0]=1;t=1;
		while(t&&f[1]);
		printf("p0 is in critical section\n");
		f[0]=0;
	}
}
void *p1(void *vargp)
{
	while(1)
	{
		sleep(1);
		f[1]=1;
		t=0;
		while(!t&&f[0]);
		printf("p1 is in critical section\n");
		f[1]=f;
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
