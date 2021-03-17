# include<stdio.h>
int main(void)
{
   int a,b,c;
   printf("please input two numbers:\n");
   scanf("%d%d",&a,&b);
   c=a*b;
   while(a!=b)
   {
	   if(a>b)
	   a=a-b;
	   else
	   b=b-a;
   }
   printf("the largest is %d",a);
   printf("the smallst is %d",c/a);
   return 0;
}