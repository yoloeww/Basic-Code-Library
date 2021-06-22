# include<stdio.h>
int max(int a,int b)
{
  int z;
  if(a>b) z=a;
  else
	  z=b;
  return z;
}
int main(void)
{
	int a,b;
  int (*p)(int,int);
  p=max;
  printf("input a & b:\n");
  scanf("%d%d",&a,&b);
  printf("a=%d\nb=%d\nmax=%d\n",a,b,(*p)(a,b));
return 0;

}