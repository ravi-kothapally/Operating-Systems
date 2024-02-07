#include<stdio.h>
int n,i,t,st,j,h=0,r[20],d,s,lastscan,left,right,j,min,next;
void main()
{
	printf("#no of requests:");scanf("%d",&n);
	printf("\nrequests:");
	for(i=0;i<n;scanf("%d",&r[i++]));
	printf("\ntotal_cylinders:");scanf("%d",&t);
	printf("\nstart position:");scanf("%d",&s);
	printf("\nseek time plzzzz:");scanf("%d",&st);
	printf("\nsequence:");
	for(i=0;i<n;i++)
	{
		min=999;
		for(j=0;j<n;j++)
		{
			if(abs(r[j]-s)<min)
			{
				min=abs(r[j]-s);
				next=j;
			}
		}
		h+=min;
		s=r[next];
		printf("%d ",s);
		r[next]=999;
	}
	printf("\nhead movement=%d",h);
	printf("\ntotal time=%d",h*st);
}
