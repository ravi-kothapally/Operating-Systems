#include<stdio.h>
int i,n,r[20],f1,j,k,l,f[10]={-1,-1,-1,-1,-1,-1,-1,},ptr=-1,flag,c=0;
int main()
{
	printf("no of frames :\nrefernce string length and  ref string");
	scanf("%d%d",&f1,&n);
	for(i=0;i<n;scanf("%d",&r[i++]));
	for(i=0;i<n;i++)
	{
		for(j=0;j<f1&&r[i]!=f[j];j++);
		if(j==f1)
		{
			f[ptr=(ptr+1)%f1]=r[i];
			c++;
		}
		for(k=0;k<f1;printf(" %d ",f[k++]));
		printf("\n");
	}
	printf("page miss= %d",c);
}
