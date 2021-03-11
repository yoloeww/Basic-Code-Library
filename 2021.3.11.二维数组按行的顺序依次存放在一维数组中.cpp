# include<stdio.h>
# define N 90
int fun(char a[]);
int fun(char a[])
{
   int i;
   int k=1,m=0;;
   char *p;
   p=&a[0];
   while(*p)
   {
      m++;
	  p++;
   }
   for(i=0;i<m;i++)
   {
      if(a[i]==a[m-i-1])
          ;
	  else
	  {
		  k=0;
		  break;
	  }
   }
  return k;
}
int main(void)
{
	char a[N];
	printf("Input char:\n");
	gets(a);
	if (fun(a))
	printf("yes\n");
    else
	printf("no\n");
   return 0;

}
