#include<stdio.h>
int i,a[10],d[10],b[10],t=0,p,j=0,index,f,n,min;
float x,maxrr;
float find_rr(int p)
{
	return ((t-a[p])+b[p])/b[p];
}
int pid()
{
	f=0;
	maxrr=-999;
	for(i=0;i<n;i++)
	{
		if(a[i]<=t)
		{
			f=1;
			x=find_rr(i);
			if(x>maxrr)
			{
				maxrr=x;
				index=i;
			}
		}
	}
	if(f==0){
		min=999;
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
			index=i;
	   }
	}}
	return index;
}
void chart()
{

	while(j<n)
	{
		p=pid();
		if(a[p]<=t)
		{
			t+=b[p];
			a[p]=999;
			printf("  p%d %d|",p+1,t);
			j++;
		}
		else
		{
			t=a[p];
			printf("  idl %d |",t);
		}
	}
}
void main()
{
	printf("no of processes ,arrival times ,burst times ,time quantum");
	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
		scanf("%d",&a[i]);
		d[i]=a[i];
	}
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	chart();
}
