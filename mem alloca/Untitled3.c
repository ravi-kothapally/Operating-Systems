 #include<stdio.h>
#include<stdlib.h>
int i,f[10],n,p[10],m,j,a[10],intfr=0;
void ff()
{
	int fl=0,min,index,ir;
	for(i=0;i<m;i++)
	{
		fl=0;min=-9999;
		for(j=0;j<n;j++)
		{
			if(f[j]>=p[i]&&min<f[j]&&a[j]==0)
			{
			 min=f[j];index=j;fl=2;
			}
		}
		if(fl==2)
		{
		a[index]=i+1;intfr+=f[index]-p[i];
		}
		if(fl==0)
			printf("p%d is waiting",i+1);

	printf("\n\n_________\n");
	for(ir=0;ir<n;ir++)
	{

		if(a[ir]==0)
		printf("|     |\n");
		else
		printf("|  %d  |\n",a[ir]);
		printf("|_____|\n");
	}
	}
	printf("internal fragmentation : %d",intfr);
}
void main()
{
	printf("no of partitions");
	scanf("%d",&n);
	printf("sizes");
	for(i=0;i<n;i++)
	scanf("%d",&f[i]);
	printf("no of processes");
	scanf("%d",&m);
	printf("sizes");
	for(i=0;i<m;i++)
	scanf("%d",&p[i]);
	ff();
}
