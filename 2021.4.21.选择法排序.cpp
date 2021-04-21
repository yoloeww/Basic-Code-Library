# include<stdio.h>
int main(void)
{
 int a,b,c;
 a=3,b=4;
 if(b>a)
 {
    c=b;
	b=a;
	a=c;
 }
 printf("%d%d",a,b);
 return 0;
}