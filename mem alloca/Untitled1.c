#include<stdio.h>
#include<stdlib.h>
int i,f[10],n,p[10],m,j,a[10],intfr=0;
void ff()
{
	int fl=0;
	for(i=0;i<m;i++)
	{
		fl=0;
		for(j=0;j<n;j++)
		{
				if(f[j]>=p[i]&&a[j]==0)
				{
					intfr+=f[j]-p[i];
					fl=1;
				a[j]=i+1;
				break;
			    }
		}
		if(fl==0)
		{
			printf("p%d is waiting",i+1);
		}
						printf("\n");
	printf("_______\n");
	int ir;
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
