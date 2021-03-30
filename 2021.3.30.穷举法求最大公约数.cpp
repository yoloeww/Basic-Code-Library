# include<stdio.h>
int main(void)
{
   int a,b,c=0,i,k;
   printf("input two numbers:\n");
   scanf("%d%d",&a,&b);
       k=a*b;
   	   c=a>b? b:a;
	   while(a%c!=0||b%c!=0)
	   {
	        c--;
	   }
	   printf("the largest number =%d\n",c);
	   printf("the least number =%d\n",k/c);
 
return 0;

}