int pid(int time,int *a,int *pr,int n,int minpi)
{   int i,minp=999;
	if(a[minpi]<=time)
	{
		for(i=0;i<n;i++)
		{
			if(minp>=pr[i]&&a[i]<=time)
			{
				if(pr[i]==minp)
				{
					if(a[minpi]>a[i])
			   	 	{
						 minp=pr[i];
			    		 minpi=i;
			   		 }
		   		 }
		    	else
		   	 	{
		    		minp=pr[i];
			 	   minpi=i;
				}
			}
		}
	}
	return minpi;
}
int priority(int time,int *a,int *b,int n,int *pr)
{
	int i=0,p;
	while(i<n)
	{
		p=pid(time,a,pr,n,minat(a,n));
		if(time>=a[p])
		{
			time+=b[p];
			i++;
			a[p]=999;	printf(" p%d %d |",p+1,time);
		}
		else
		{
			time=a[p]; 	printf(" /// %d |",time);
		}
	}return time;
}
