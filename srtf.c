#include<stdio.h>
int a[10],n,b[10],p,c[10],d[10],sum=0,time=0,e[10],minp;
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
{   int i,minpi;
minp=999;
	int minati=min();
	if(a[minati]<=time)
	{
		for(i=0;i<n;i++)
		{
			if(minp>=b[i]&&a[i]<=time)
			{
				if(b[i]==minp)
				{
					if(a[minpi]>a[i])
			   	 	{
						 minp=b[i];
			    		 minpi=i;
			   		 }
		   		 }
		    	else
		   	 	{
		    		minp=b[i];
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
			time++;
			b[p]--;
			if(b[p]==0)
			{
			c[p]=time;
			i++;
			a[p]=999;
		    }
		    printf("p%d-->",p+1);
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
			printf("%d   %d   %d   \n",c[i],c[i]-d[i],c[i]-d[i]-e[i]);
			t+=c[i]-d[i];
			w+=c[i]-d[i]-e[i];
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
	chart();
}
