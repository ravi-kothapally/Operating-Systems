#include<stdio.h>
#include<math.h>
int n,i,t,st,j,h=0,a[20],d,s;
void main()
{
	printf("#no of requests:");scanf("%d",&n);
	printf("\n requests:");
	for(i=0;i<n;scanf("%d",&a[i++]));
	printf("\ntotal_cylinders:");scanf("%d",&t);
	printf("\nstart position:");scanf("%d",&s);
	printf("\nseek time plzzzz:");scanf("%d",&st);
	a[-1]=s;
	printf("\nsequence:");
	for(i=0;i<n;i++)
	{
		h=h+(abs(a[i]-a[i-1]));
		printf("%d ",a[i]);
	}
	printf("\nhead moment=%d",h);
	printf("\ntotal time=%d",h*st);
}
