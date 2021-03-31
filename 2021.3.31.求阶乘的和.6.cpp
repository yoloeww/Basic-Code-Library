# include<stdio.h>
int main(void)
{
   int i;
   double t=1,s=0;
   for(i=1;i<=20;i++)
   {
       t=i*t;
	   s=s+t;
   }
  printf("sum=%22.15elf\n",s);
  return 0;
}