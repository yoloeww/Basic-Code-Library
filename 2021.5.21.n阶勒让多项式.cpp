# include<stdio.h>
float p(int n,int x)
{
   if(n==0)
	   return 1;
   else if(n==1)
	   return (x);
   else
       return (2*n)-1*x*p((n-1),x)-(n-1)*p(n-2,x)/n;
}
int main(void)
{
	int x,n;
	printf("input x and n:\n");
	scanf("%d",&x);
	scanf("%d",&n);
	printf("p=%f",p(n,x));

return 0;
}
