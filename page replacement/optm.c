#include <stdio.h>
int f1,n,r[25],i,x,j,c=0,f[10]={-1,-1,-1,-1},op[10]={100,100,100,100,100},p,fc[10]={-1,-1,-1,-1,-1},k,m;
int indx(int *a,int n,int e)
{		for(k=0;k<n;k++)
		if(a[k]==e) return k;
		return 0;
											}
void e(int x)
{				int a=indx(r+i+1,n-i-1,r[i]);
				op[x]=a?a+i:99-fc[x];           }
void main()
{
	printf("no of frame ;ref str len; ref str: ");
	scanf("%d %d",&f1,&n);
	for(i=0;i<n;scanf("%d",&r[i++]));
	for(i=0;i<n;i++)
	{
		x=indx(f,f1,r[i]);
		if(x) e(x-1);
		else
		{   c++;m=-999;
			for(j=0;j<f1;m<op[j]?m=op[j],p=j:j,j++);
			fc[p]=i;
			f[p]=r[i];
			e(p);
		}
		for(j=0;j<f1;printf("%d ",f[j++]));
		printf("\n");
	}
	printf("page miss=%d",c);
}
