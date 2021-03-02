# include<stdio.h>
int main(void)
{
  int a,b,m,n;
  printf("Input two integer numbers:\n");
  scanf("%d%d",&a,&b);
  m=a;
  n=b;
  while(a!=b)
  {
	  if(a>b)
		  a=a-b;
	  else
		  b=b-a;
  }
printf("The largest common divisor:%d\n",a);
printf("The least common mltiple:%d\n",m*n/a);
return 0;
}