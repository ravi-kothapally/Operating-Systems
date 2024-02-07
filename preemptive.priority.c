#include<stdio.h>
int a[10],n,b[10],p,c[10],d[10],sum=0,pr[10],time=0,e[10];
int min()
{	int i,min=a[0],index=0;
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
			index=i;
		}
	}	return index;
}
int pid()
{   int i,minp=999,minpi;
	int minati=min();
	if(a[minati]<=time)
	{
		for(i=0;i<n;i++)
		{
			if(minp>pr[i]&&a[i]<=time)
			{
				if(pr[i]==minp)
				{
					if(a[minpi]>a[i])
			   	 	{
						 minp=pr[i];
			    		 minpi=i;
			   		 }
		   		 }
		    	else
		   	 	{
		    		minp=pr[i];
			 	   minpi=i;
				}
			}
		}
		return minpi;
	}
	else
	{
		return minati;
	}
}
void chart()
{
	int i=0;
	float t,w;
	while(i<n)
	{
		p=pid();
		if(time>=a[p])
		{
			printf("p%d-->",p+1);
			time++;
			e[p]--;
			if(e[p]==0)
			{
			c[p]=time;
			i++;
			a[p]=999;
		    }
		}
		else
		{
			printf("ideal-->");
			time=a[p];
		}
	}
	printf("\nct  | tat |  wt \n");
	for(i=0;i<n;i++)
	{
			printf("%d   %d   %d   \n",c[i],c[i]-d[i],c[i]-d[i]-b[i]);
			t+=c[i]-d[i];
			w+=c[i]-d[i]-b[i];
	}
	printf("atat= %f awt= %f ",t/n,w/n);
}
void main()
{
	int i;
	float atat,awt,sum=0;
	printf("no of processes");
	scanf("%d",&n);
	printf("arrival times");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		d[i]=a[i];
	}
	sum=0;
	printf("burst times");
	for(i=0;i<n;i++)
	{
	scanf("%d",&b[i]);
	e[i]=b[i];
	}
	printf("priority");
	for(i=0;i<n;i++)
	scanf("%d",&pr[i]);
	chart();
}
