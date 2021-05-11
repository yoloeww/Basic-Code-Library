# include<stdio.h>
int max(int a,int b)
{
	int c;
	if(a>b)
	c=a;
	else 
    c=b;
	return c;
}
int main(void)
{
  int a,b,c;
  printf("input a and b:\n");
  scanf("%d%d",&a,&b);
  c=max(a,b);
  printf("the max number is %d",c);
  return 0;
}