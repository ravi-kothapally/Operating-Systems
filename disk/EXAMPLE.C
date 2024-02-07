#include <stdio.h>
int main()
{
   char s[20]="serr";
   gets(s);
   int j,i=0,f=0,c;
   while(s[i]!='\0')
   {
   	if(s[i]!='1'){

   		j=i+1;c=1;f=0;
		while(s[j]!='\0')
		{
			if(s[j]!='1'){

			if(s[j]==s[i]||s[j]==s[i]-32||s[i]==s[j]-32)
			{
			c++;
			s[j]='1';
			}}
			j++;
  		}
  		if(c!=3)
		{
		f=1;
		puts("NO");
		break;}
				}
		i++;
   }
   if(f==0)
   puts("YES");
}
