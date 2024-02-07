#include<stdio.h>
int f[5]={-1,-1,-1,-1,-1},i,j,q,m,ab[5]={0,0,0,0,0},fc[5]={-1,-1,-1,-1,-1},fi=0,c=0,r[30],f1,n;
void main()
{
	printf("#no of frames\n#no of pages\n#ref str");
	scanf("%d %d",&f1,&n);
	for(i=0;i<n;i++)
	scanf("%d",&r[i]);
	for(i=0;i<n;i++)
	{
		if(r[i]==-1)
			for(j=0;j<f1;j++)
			ab[j]>>=1;
		else
		{
			for(j=0;j<f1;j++)
			if(f[j]==r[i])
			{ab[j]|=8;break;}
			if(j==f1)
			{
				c++;m=999;
				for(j=0;j<f1;j++)
				if(m>ab[j]||m==ab[i]&&fc[j]<fc[fi])
				{m=ab[j];fi=j;}
				f[fi]=r[i];fc[fi]=i;ab[fi]=8;
			}}
		printf("%d ->",r[i]);
		for(j=0;j<f1;j++)
		printf("%d",f[j]);
		printf("\n");
	}
	printf("faluts=%d",c);
}
