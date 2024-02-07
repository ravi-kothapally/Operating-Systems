#include<stdio.h>
int i,n,r[20],f1,j,k,f[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},flag,c=0,t,x,mr=-1,fill=0;
int main()
{
	printf("no of frame ;ref str len; ref str: ");
	scanf("%d %d ",&f1,&n);
	for(i=0;i<n;i++)
	scanf("%d",&r[i]);
	for(i=0;i<n;i++)
 	{
		for(j=0;j<f1&&r[i]!=f[j];j++);
		if(j==f1)
		{
			if(fill<f1)
			mr=fill++;
			f[mr]=r[i];
			c++;
		}
		else
		mr=j;
		for(k=0;k<f1;k++)
		printf(" %d ",f[k]);
		printf("\n");
	}
	printf("page miss= %d",c);
}
