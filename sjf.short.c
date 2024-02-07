 #include<stdio.h>
int ij=0,a[10],b[10],c[10],i,min,mi,n,time=0,p,d[10];
float atat,awt;
void main()
{
	printf("#no of process\n#at bt\n");
	scanf("%d",&n);
	for(i=0;i<n;scanf("%d %d",&a[i],&b[i]),d[i]=a[i++]);
	while(ij<n) 															//main code
	{
		min=mi=9999;
		for(i=0;i<n;a[i]<min?min=a[i],p=i:i,i++);                           //minat index
		if(a[p]<=time)
		{
			for(i=0;i<n;i++)
			if(b[i]<mi&&time>=a[i]||b[i]==min&&time>=a[i]&&a[p]>a[i]) 	 //findminbt index
			{mi=b[i];p=i;}
			c[p]=time+=b[p];
			ij++;a[p]=999;
	     	printf(" p%d %d |",p+1,time);
		}
		else
		{	printf(" /// %d |",time=a[p]);	}                           //idle case
	}
	for(i=0;i<n;i++)
	{ printf("\n%d \t %d \t %d ",c[i],c[i]-d[i],c[i]-d[i]-b[i]);
		atat+=c[i]-d[i];awt+=c[i]-d[i]-b[i];
	}
	printf("\natat=%f awt= %f",atat/n,awt/n);
}
