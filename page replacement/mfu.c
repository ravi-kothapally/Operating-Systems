#include<stdio.h>
int f1,n,r[25],i,x,j,c=0,f[10]={-1,-1,-1,-1},p;
float lf[10]={99.0,98.0,97},min;
void main()
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
			min=-999;
			for(j=0;j<f1;lf[j]>min?min=lf[j],x=j:j,j++);
			f[x]=r[i];
			lf[x]=1-(float)i/n;
			c++;
		}
		else
		lf[j]++;
		for(j=0;j<f1;j++)
		printf("%d ",f[j]);
		printf("\n");
	}
	printf("page miss=%d",c);
}
