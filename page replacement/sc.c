#include<stdio.h>
int f1,n,r[25],rb[6]={0,0,0,0,0,0},f[6]={-1,-1,-1,-1,-1,-1},i,j,k,l,ptr=0,flag=0,c=0;
int fun()
{
	if(rb[ptr]==0)
	return ptr;
	else
	{
		rb[ptr]=0;
		ptr=(ptr+1)%f1;
		fun();
	}
}
void main()
{
	printf("no of frames :");
	scanf("%d",&f1);
	printf("refernce string length and  ref string");
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&r[i]);
	for(i=0;i<n;i++)
 	{
		for(j=0;j<f1&&r[i]!=f[j];j++);
		if(j==f1)
 		{
 			c++;
   		    f[fun()]=r[i];
   			ptr=(ptr+1)%f1;
		}
		else
		rb[j]=1;
		for(k=0;k<f1;k++)printf(" %d ",f[k]);
		printf("\n");
	}
	printf("page miss= %d",c);
}
