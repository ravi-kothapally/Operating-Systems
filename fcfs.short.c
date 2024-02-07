#include<stdio.h>
int ij=0,a[10],b[10],c[10],i,min,mi,n,time=0,p,d[10];
float atat,awt;
void main()
{
	printf("#no of process\n#at bt\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		d[i]=a[i];
	}
	while(ij<n) 											//main code
	{
		min=mi=999;
		for(i=0;i<n;i++)
		if(a[i]<min)
		{min=a[i];	p=i;	 }//find minat
		if(time>=a[p])
		{	 time+=b[p];
			 ij++;
			a[p]=999;c[p]=time;
	     	printf(" p%d %d |",p+1,time);
		}
		else
		{	time=a[p];printf(" /// %d |",time);	}           //idle case
	}
	for(i=0;i<n;i++)
	{ printf("\n%d \t %d \t %d ",c[i],c[i]-d[i],c[i]-d[i]-b[i]);
		atat+=c[i]-d[i];awt+=c[i]-d[i]-b[i];
	}
	printf("\natat=%f awt= %f",atat/n,awt/n);
}
