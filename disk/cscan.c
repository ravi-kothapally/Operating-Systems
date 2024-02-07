#include<stdio.h>
int n,i,t,st,j,h=0,r[20],d,s,lastscan;
void ins(int *arr, int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void main()
{
	printf("#no of requests:");scanf("%d",&n);
	printf("\nrequests:");
	for(i=0;i<n;scanf("%d",&r[i++]));
	printf("\ntotal_cylinders:");scanf("%d",&t);
	printf("\nstart position:");scanf("%d",&s);
	printf("\nseek time plzzzz:");scanf("%d",&st);
	printf("\ndirection r/l=> 1/0");scanf("%d",&d);
	printf("\nsequence:");
	ins(r,n);
	if(d==1)
	{
		for(i=0;i<n;i++)
		if(r[i]>=s)printf("%d ",r[i]);
		for(i=0;i<n&&r[i]<s;i++)
		{
		printf("%d ",r[i]);
		lastscan=r[i];
		}
	}
	else
	{
		for(i=n-1;i>=0;i--)
		if(r[i]<=s)printf("%d ",r[i]);
		for(i=n-1;i>=0&&r[i]>s;i--)
		{
		printf("%d ",r[i]);
		lastscan=r[i];
		}
	}
	printf("\nhead movement=%d",h=(t-abs((s-lastscan))));
	printf("\ntotal time=%d",h*st);
}

