# include<stdio.h>
void fun(char *p,char *q)
{

   while(*q!='\0')
   {
	   *p=*q;
         p++;
		 q++;
   }
   *p=0;
}
int main(void)
{
  char a[80],b[80];
  printf("input b:\n");
  gets(b);
  fun(a,b);
  printf("the new stream is:");
  puts(a);
  return 0;
}