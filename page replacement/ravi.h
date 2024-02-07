#include<stdio.h>
void scan(int * a,int n)
{
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
}
void print(int * a,int n)
{
	int i;
	for( i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");
}
int min(float *a,int n)
{
	int i,index=0;float min=a[0];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
			index=i;
	   }
	}
	return index;
}
int maxi(int *a,int n)
{
	int i,index=0;float min=a[0];
	for(i=0;i<n;i++)
	{
		if(min<a[i])
		{
			min=a[i];
			index=i;
	   }
	}
	return index;
}
int maxf(float *a,int n)
{
	int i,index=0;float min=a[0];
	for(i=0;i<n;i++)
		if(min<a[i])
		{
			min=a[i];
			index=i;
	   }

	return index;
}
int indx(int *a,int n,int e)
{
	int k;
	for(k=0;k<n;k++)
	if(e==a[k])
	return k+1;
	return 0;
}
int sort(int *a,int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]<a[i+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
