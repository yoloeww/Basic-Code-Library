# include<stdio.h>
void order(int *a,int *b,int *c)
{
  int i;
      if(*a>*b)
	  {
		  i=*b;
	      *b=*a;
		  *a=i;
	  }
	  if(*a>*c)
	  {
	      i=*c;
		  *c=*a;
		  *a=i;
	  }
	  if(*b>*c)
	  {
	     i=*c;
		 *c=*b;
		 *b=i;
	  }
		  

}
int main(void)
{
  int a=3,b=5,c=1;
  order(&a,&b,&c);
  printf("%5d%5d%5d\n",a,b,c);
  return 0;

}