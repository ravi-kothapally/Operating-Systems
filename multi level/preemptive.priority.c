int premptivepriority(int time,int *a,int *b,int n,int *pr)
{
	int i=0,p;
	while(i<n)
	{
		p=pid(time,a,pr,n,minat(a,n));
		if(time>=a[p])
		{
			time++;
			b[p]--;
			if(b[p]==0)
			{
			i++;
			a[p]=999;
		    }
		    printf(" p%d %d |",p+1,time);
		}
		else
		{
			time=a[p];		printf(" /// %d |",time);
		}
	}return time;
}
