int pidd(int t,int * a,int *b, int n)
{
	int f=0,maxrr=-999,i,x,min,index;
	for(i=0;i<n;i++)
	{
		if(a[i]<=t)
		{
			f=1;
			x=((t-a[i])+b[i])/b[i];
			if(x>maxrr)
			{
				maxrr=x;
				index=i;
			}
		}
	}
	if(f==0){
		min=999;
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
			index=i;
	   }
	}}
	return index;
}
int hrrn(int t,int *a,int *b,int n)
{
	int j=0,p;
	while(j<n)
	{
		p=pidd(t,a,b,n);
		if(a[p]<=t)
		{
			t+=b[p];
			a[p]=999;
			printf(" p%d %d|",p+1,t);
			j++;
		}
		else
		{
			t=a[p];
			printf(" /// %d |",t);
		}
	}return t;
}
