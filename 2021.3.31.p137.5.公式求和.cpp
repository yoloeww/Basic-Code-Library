# include<stdio.h>
int main(void)
{
   int i,tn=0,s1=0,a,n;
   printf("input a number:\n");
   printf("input number situation:\n");
   scanf("%d",&a);
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {      
	      tn=tn+a;      //新的一位
	      s1=s1+tn;   //求和
          a=a*10;   //大一位
   }
   printf("sum=%d",s1);
   return 0;
}