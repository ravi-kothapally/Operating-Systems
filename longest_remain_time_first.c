#include<stdio.h>
int max,i,n,a[10],b[10],d[10],c[10],p,time=0,maxi,j=0,f,min,e[10];
float ta,w;
int pid()
{
	max=-999;f=0;
	for(i=0;i<n;i++)
		{
			if(max<=b[i]&&a[i]<=time)
			{
				f=1;
				if(b[i]==max)
				{
					if(a[maxi]>a[i])
			   	 	{
						 max=b[i];
			    		 maxi=i;
			   		 }
		   		 }
		    	else
		   	 	{
		    		max=b[i];
			 	   maxi=i;
				}
			}
	   }
	   if(f==0)
	   {
	   	min=999;
			for(i=0;i<n;i++)
			{
				if(min>a[i])
				{
					min=a[i];
			maxi=i;
			}
		}
	   }
	   return maxi;
}
void chart()
{
	while(j<n)
	{
		p=pid();
		if(time>=a[p])
		{
			time++;
			b[p]--;
			if(b[p]==0)
			{
			c[p]=time;
			j++;
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
		printf("\n\n		ct			tat			wt \n");
	for(i=0;i<n;i++)
	{
	printf("\n		%d			%d			%d ",c[i],c[i]-d[i],c[i]-d[i]-e[i]);
	ta+=c[i]-d[i];
	w=c[i]-d[i]-e[i];
	}
	printf("\n atat= %f	 awt= %f",ta/n,w/n);
}
void main()
{
	printf("no of processes ,arrival times ,burst times");
	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
		scanf("%d",&a[i]);
		d[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
			scanf("%d",&b[i]);
			e[i]=b[i];
	}
	chart();
}
