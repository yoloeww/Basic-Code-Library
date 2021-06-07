# include<stdio.h>
void order(int *a,int *b)
{
  int temp;
  if(*a<*b)
  {
      temp=*b;
	  *b=*a;
	  *a=temp;
  }

}
int main(void)
{
  int a,b;
  printf("input a and b:\n");
  scanf("%d%d",&a,&b);
  order(&a,&b);
  printf("max=%d,min=%d",a,b);
  return 0;


}