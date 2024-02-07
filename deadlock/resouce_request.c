#define s(x) scanf("%d",&x)
#include<stdio.h>
int a[10][10],f1,m[10][10],n[10][10],w[10],av[10],r,m1,j,i,f[10]={0},p,s[10],k,x,l2,l3,rs[10],t;
void main()
{
	printf("#resources\n#processes \n#allocation mat \n#max mat \n#available\n#request process\n#resouse\n");
 	s(r);s(p);
	for(i=0;i<p;i++)
	for(j=0;j<r;s(a[i][j++]));
	for(i=0;i<p;i++)
	for(j=0;j<r;s(m[i][j]),n[i][j]=m[i][j]-a[i][j],j++);
	for(i=0;i<r;s(w[i++]));
	s(t);for(i=0;i<r;s(rs[i++]));
	for(i=0;i<r&&rs[i]<=n[t][i];i++);
	if(i==r)
	{
		for(i=0;i<r&&rs[i]<=a[t][i];i++);
		if(i==r)
		{
			for(i=0;i<r;i++)
			{
				w[i]-=rs[i];
				a[t][i]+=rs[i];
				n[t][i]-=rs[i];
			}
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
  		else printf("waiting");
	}
	else
	printf("error requset>need");
}
