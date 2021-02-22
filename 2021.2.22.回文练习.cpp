/*# include <stdio.h>
# define N 90
int fun (char str[]);
int fun (char str[])
{ 
	char *p;
	int n=0;int i;int fp=1;
	p=&str[0];
	while(*p)
	{
	  n++;
	  p++;
	}
   for(i=0;i<n;i++)
   {
	   if(str[i]==str[n-i-1])
		   ;
	   else
	   {
		   fp=0;
		   break;
	   }
   }
   return fp;
}
int main(void)
{
   char str[N];
   printf("请输入一串字符:\n");
   gets(str);
   if (fun(str))
	printf("yes\n");
   else
	printf("no\n");
   return 0;
}*/

# include <stdio.h>
int main(void)
{  int n=0;
   for(int i=100;i<=200;i++)
   {
	   for(int j=2;j<=i;j++)
	   {
       if (i%j==0)
		    break;
	   }
	   if(j==i)  //要记得这个巧妙地条件
	   {
		   printf("%d\n",i);
	       n++;
	   }
   }
     printf("%d",n);
	 return 0;
}












