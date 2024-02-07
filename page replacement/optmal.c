#include "ravi.h""
int f1,n,r[25],i,x,j,c=0,f[10]={-1,-1,-1,-1},op[10]={100,100,100,1001,100},p,fc[10]={-1,-1,-1,-1,-1};
void e(int x)
{
	int a=indx(r+i+1,n-i-1,r[i]);
	op[x]= a?a+i:99-fc[x];
}
void main()
{
	printf("no of frame ;ref str len; ref str: ");
	scanf("%d %d ",&f1,&n);
 	scan(r,n);
	for(i=0;i<n;i++)
	{
		x=indx(f,f1,r[i]);
		if(x) e(x-1);
		else
		{   c++;
  			p=maxi(op,f1);
			fc[p]=i;
			f[p]=r[i];
			e(p);
		}
  	print(f,f1);
	}
	printf("page miss=%d",c);
}
