int srtf(int time,int *a,int *b,int n)
{
	int i=0,p;
	while(i<n)
	{
		p=minbt(time,a,b,n,minat(a,n));
		if(time>=a[p])
		{
			time++;
			b[p]--;
			if(b[p]==0)
			{
			i++;
			a[p]=999;
		    }
		    printf(" p%d %d|",p+1,time);
		}
		else
		{
			time=a[p];printf(" /// %d|",time);
		}
	}
}
