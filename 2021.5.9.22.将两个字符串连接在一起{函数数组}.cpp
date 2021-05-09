# include<stdio.h>
void fun(char *p,char *q)
{
while(*p!='\0')
		p++;
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
  printf("input a and b:\n");
  gets(a);
  gets(b);
  fun(a,b);
  printf("the new stream is:");
  puts(a);
  return 0;
}
