#include<stdio.h>
int a[20],a1[20],a2[20],b[20],b1[20],b2[20],i,j,k,l,o=0,k=0,n,m,t,time=0,w=0;
int minat(int * a,int n)
{
	int i,min=a[0],index=0;
	for(i=0;i<n;i++)
		if(min>a[i])
		{	min=a[i];		index=i;}
	return index;
}
int fcfs(int time, int *a ,int *b, int n)
{
	int i=0,j,p,x;
	while(i<n)
	{
		p=minat(a,n);
		if(time>=a[p])
		{
			time+=b[p];
			i++;
			a[p]=999;
			 printf(" q1 p%d %d |",p+1,time);
		}
		else
		{
			time=sjf(time,a2,b2,k,0,p);
		}
	}
	return time;
}
int minbt(int time,int *a,int *b,int n)
{
	   int i,min=9999,index;
		void x(){ min=b[i];index=i;	}
		for(i=0;i<n;i++)
		{
			if(b[i]<=min&&time>=a[i])
			{
				if(b[i]==min)
				{
					if(a[index]>a[i])x();
			    }
			    else x();
	}}
	return index;
}
int sjf(int time,int *a,int *b,int n,int r,int po)
{
	
	int j,p,x;
	while(w<n)
	{	p=minat(a,n);
		if(time>=a[p])
		{   p=minbt(time,a,b,n);
			if(r==1)
			  time+=b[p];
			 else
			 {
			 	if(b[p]>=(a1[po]-time))
			 	{
				 time+=a1[po];
			 	b[p]-=a1[po];
				 }
			 	else
			 	{
			 		time+=b[p];b[p]=0;
				 }
				 if(b[p]==0)
				 {
				 a[p]=999;w++;}
				printf("q22 p%d %d |",p+1,time);
			 	return time;
			 }
			w++;
			a[p]=999;
	     	printf("q2 p%d %d |",p+1,time);
		}
		else
		{
			if(r==0){
			time=(a1[po]>a[p])?a[p]:a1[p];
			printf(" /// %d |",time);
			return time;
			}
			time=a[p];printf(" /// %d |",time);
		}}
	return time;
}
void main()
{
	printf("#no of processes\n#arriva times\n#burst times\n#time quantum\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(j=0;j<n;j++)
	scanf("%d",&b[j]);
	scanf("%d",&t);
	for(i=0;i<n;i++)
	{
		if(b[i]<=t)
		{
			a1[o]=a[i];
			b1[o++]=b[i];
		}
		else
		{
			a2[k]=a[i];
			b2[k++]=b[i];
		}
	}
		printf("queue1");
	for(i=0;i<o;i++)
	{
	printf("%d %d",a1[i],b1[i]);
	printf("\n");
	}
		printf("queue2");
	for(i=0;i<k;i++)
	{
	printf("%d %d",a2[i],b2[i]);
	printf("\n");
	}
	time=fcfs(time,a1,b1,o);
	time=sjf(time,a2,b2,k,1,-1);
}
