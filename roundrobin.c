#include<stdio.h>
int a[10],n,b[10],p,c[10],d[10],sum=0,t=0,bt[10],tq,q[50],r=-1,f=-1,e[10],pid[10],i=0,j,k=0,temp;
float ta,w;
int addq()
{
	    for(j=0;j<n;j++)
		{
			if(e[j]<=t)
			{
				q[++f]=	pid[j];e[j]=999;
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
		e[i]=d[i]=a[i];	pid[i]=i;
	}

	for(i=0;i<n;i++)
	{
		for(j=1;j<n-i;j++)
		{
			if(e[j]<e[j-1])
			{
				temp=e[j];e[j]=e[j-1];e[j-1]=temp;
				temp=pid[j];pid[j]=pid[j-1];pid[j-1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
	scanf("%d",&b[i]);
	bt[i]=b[i];
	}
	scanf("%d",&tq);
	while(k<n)                      //main code
	{    addq();    //adding elements to q
		if(r!=f)   // if q not empty
        {
			    p=q[++r];    //dequeue
				if(b[p]>tq)
				{
					t+=tq;	b[p]-=tq;addq();q[++f]=p;
				}
				else
				{
					t+=b[p];	b[p]=0;	k++;	c[p]=t;	a[p]=999;
				}
				printf(" p%d %d |",p+1,t);
		}
		else
		{
			t=e[k];
  			printf(" id %d |",t);
		}
	}
		printf("\n\n		ct			tat			wt \n");
	for(i=0;i<n;i++)
	{
			printf("		%d			%d			%d   \n",c[i],c[i]-d[i],c[i]-d[i]-bt[i]);
			ta+=c[i]-d[i];
			w+=c[i]-d[i]-bt[i];
	}
	printf("atat= %f awt= %f ",ta/n,w/n);
}
