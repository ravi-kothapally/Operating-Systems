int ppid(int time,int *a,int *b,int n)
{
	int maxi,max=-999,f=0,i,min;
	for(i=0;i<n;i++)
		{
			if(max<=b[i]&&a[i]<=time)
			{
				f=1;
				if(b[i]==max)
				{
					if(a[maxi]>a[i])
			   	 	{
						 max=b[i];
			    		 maxi=i;
			   		 }
		   		 }
		    	else
		   	 	{
		    		max=b[i];
			 	   maxi=i;
				}
			}
	   }
	   if(f==0)
	   {
	   	min=999;
			for(i=0;i<n;i++)
			{
				if(min>a[i])
				{
					min=a[i];
			maxi=i;
			}
		}
	   }
	   return maxi;
}
int lrtf(int time,int * a,int *b,int n)
{
	int j=0,p;
	while(j<n)
	{
		p=ppid(time,a,b,n);
		if(time>=a[p])
		{
			time++;
			b[p]--;
			if(b[p]==0)
			{
			j++;
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
