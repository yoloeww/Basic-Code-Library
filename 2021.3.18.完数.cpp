# include<stdio.h>
int main(void)
{
  int i,k=0;
  int n;
  for(n=2;n<1000;n++)
  {
	  for(i=1;i<n;i++)
	  {
      if(n%i==0)
		  k+=i;
	  }
          if(k==n)
		  printf("%d",n);
  }
return 0;
}