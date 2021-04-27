# include <stdio.h>
int main(void)
{
   char *p,*q;
   char a[80],b[40];
   int k=0;
   printf("input a:\n");
   gets(a);
   printf("input b:\n");
   gets(b);
   p=a;
   q=b;
   while(*p!='\0')
   {
	   k++;
       p++;
   }
  while(*q!='\0')
  {
	  a[k++]=*q;
      q++;
  }
	  a[k]='\0';
	  puts(a);
	  return 0;

}