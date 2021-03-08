# include<stdio.h>
int main(void)
{
  int x,y;
  printf("Input x:\n");
  scanf("%d",&x);
  if(x<1)
  {
      y=x;
	  printf("x=%d,y=x=%d\n",x,y);
  }
  else if(x>=1&&x<10)
  {
     y=2*x-1;
	 printf("x=%d,y=2*x-1=%d\n",x,y);
  }
  else
  {
     y=3*x-11;
	 printf("x=%d,y=3*x-11=%d\n",x,y);
  }
return 0;}