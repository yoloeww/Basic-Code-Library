# include<stdio.h>
int largest (int a,int b);
int least (int a,int b,int c);
int largest (int a ,int b)
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
int least (int a,int b,int d)
{
  return ((a*b)/d);
}

int main(void)
{
   int a,b,c,d;
   printf("Input two numbers:\n");
   scanf("%d%d",&a,&b);
   d=largest(a,b);
   c=least(a,b,d);
   printf("the largest divisor number is %d:\n",d);
   printf("the least multiple number is %d:\n",c);
return 0;
}