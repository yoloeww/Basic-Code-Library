# include<stdio.h>
int largest (int a,int b)
{
   while(a!=b)
   {
      if(a>b)
		  a=a-b;
	  else
		  b=b-a;
   }
   return a;
}
int least (int c,int a,int b)
{
   int m;
   m=c/largest(a,b);
   return m;

}
int main(void)
{
   int a,b,c;
   printf("input a and b:\n");
   scanf("%d%d",&a,&b);
   c=a*b;
   printf("the largest number is %d\n",largest(a,b));
   printf("the least number is %d\n",least(c,a,b));
   return 0;
}