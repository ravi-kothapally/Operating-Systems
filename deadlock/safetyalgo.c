#include<stdio.h>
#define s(x) scanf("%d",&x)
int a[3][3],f1,m[3][3],n[3][3],w[3],av[3],r,m1,j,i,f[3]={0},p,s[3],k,x,l2,l3;
void main()
{
	printf("#resources\n#processes \n#allocation mat \n#max mat \n#available\n");
	s(r);s(p);
	for(i=0;i<p;i++)
	for(j=0;j<r;s(a[i][j++]));
	for(i=0;i<p;i++)
	for(j=0;j<r;s(m[i][j]),n[i][j]=m[i][j]-a[i][j],j++);
	for(i=0;i<r;s(w[i++]));
	for(i=0;i<p;i++)
	{
  			if(f[i]==0)
  			{
			for(l2=0;l2<r&&n[i][l2]<=w[l2];l2++);
			if(l2==r)
			{
				for(l3=0;l3<r;w[l3]+=a[i][l3],l3++);
				printf("p%d->",i);
				f[i]=1;
				i=-1;
			}}}
	for(i=0;i<p;f[i]==0?printf("unsafe"),i++:i++);
}
