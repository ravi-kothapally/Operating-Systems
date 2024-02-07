#include<stdio.h>
void main()
{
	char s[10];
	int i=0,j,k,n1=0,n2=0;
	gets(s);
	while(s[i]!='\0')
	{
		if(s[i]>47&&s[i]<58)
		{
			n1=n1*10+(s[i]-48);
		}
		i++;
	}
	i--;

	while(i!=-1)
	{
		if(s[i]>47&&s[i]<58)
		{
			n2=n2*10+(s[i]-48);
		}
		i--;
	}
	if(n1%9==0&&n2%9==0)
	puts("YES");
	else
	puts("NO");
}
