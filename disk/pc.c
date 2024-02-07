#include<stdio.h>
void main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int v,m=999;
	for(i=0;i<n-1;i++)
	if(m>(a[i+1]-a[i]))
	m=a[i+1]-a[i];
 	for(i=0;i<n+2;i++)
	{
		v=a[0]+(i)*m;
		for(j=0;j<n&&v!=a[j];j++);
		if(j==n)
		printf("%d ",v);
	}
}
