int minbt(int time,int *a,int *b,int n)
{
	   int i,min=9999,index;
		for(i=0;i<n;i++)
		{
			if(b[i]<min&&time>=a[i]||b[i]==min&&time>=a[i]&&a[index]>a[i])
			{		min=b[i];index=i;}
		}
	return index;
}
int sjf(int time,int *a,int *b,int n)
{
	int i=0,j,p,x;
	while(i<n)
	{	p=minat(a,n);
		if(time>=a[p])
		{   p=minbt(time,a,b,n);
			 time+=b[p];
			i++;
			a[p]=999;
	     	printf(" p%d %d |",p+1,time);
		}
		else
		{
			time=a[p];printf(" /// %d |",time);
		}}
	return time;
}
