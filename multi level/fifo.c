int minat(int * a,int n)
{
	int i,min=a[0],index=0;
	for(i=0;i<n;i++)
	if(min>a[i])
	{	min=a[i];		index=i;}
	return index;
}
int fcfs(int time, int *a ,int *b, int n)
{
	int i=0,j,p,x;
	while(i<n)
	{
		p=minat(a,n);
		if(time>=a[p])
		{
			time+=b[p];
			i++;
			a[p]=999;
			 printf(" p%d %d |",p+1,time);
		}
		else
		{
			time=a[p]; printf(" /// %d |",time);
		}
	}
	return time;
}
