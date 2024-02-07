#include<stdio.h>
int i,n,r[20],f1,j,k,f[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},flag,c=0,t,x;
int main()
{
	printf("no of frames :");
	scanf("%d",&f1);
	printf("refernce string length and  ref string");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&r[i]);
	for(i=0;i<n;i++)
 	{
		for(j=0;j<f1&&r[i]!=f[j];j++);
		if(j==f1)
		c++;
		for(j;j>0;j--)
		f[j]=f[j-1];
		f[0]=r[i];
		for(k=0;k<f1;k++)
		printf(" %d ",f[k]);
		printf("\n");
	}
	printf("page miss= %d",c);
}
