#include<stdio.h>
int fun(int n, int result[])
{ 
	int i,a,b,c,d;
    int k=0;
    int m=0;
  for(i=1000;i<=n;i++)
  {
    a=i%10;
	b=i/10%10;
	c=i/100%10;
	d=i/1000;
	if(i==a*a*a*a+b*b*b*b+c*c*c*c+d*d*d*d)
	{
		k++;
	    result[m++]=i;
	}
  }
  return k;
}
int main(void)
{
   int i;
   int n=9999;
   int result[10];
   int l=fun(9999,result);
   printf("all have %d four rose numbers\n",l);
   for(i=0; i<l; i++) 
   printf("for example %d\n", result[i]);
   return 0;
}
