# include<stdio.h>
int f(int n)
{
  int m;
  if(n<0)
	  printf("error");
  else if(n==1||n==0)
	  return 1;
  else
	  return f(n-1)*n;
}
int main(void)
{
  int n;
  printf("input a number:\n");
  scanf("%d",&n);
  printf("%d!=%d\n",n,f(n));
}