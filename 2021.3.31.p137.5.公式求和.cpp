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
	      tn=tn+a;      //�µ�һλ
	      s1=s1+tn;   //���
          a=a*10;   //��һλ
   }
   printf("sum=%d",s1);
   return 0;
}