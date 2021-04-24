# include<stdio.h>
void exchange(int *a,int *b)
{
     int t=0;
	 t=*b;
	 *b=*a;
	 *a=t;
}
int main(void)
{
   int a,b;
   printf("input a and b:\n");
   scanf("%d%d",&a,&b);
   printf("the orignal a=%d,b=%d\n",a,b);
   exchange(&a,&b);
   printf("the new a=%d,b=%d\n",a,b);
   return 0;
}