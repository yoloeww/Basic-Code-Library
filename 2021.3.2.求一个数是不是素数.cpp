# include<stdio.h>
int main(void)
{ 
  int i,n;
  int a=0;
  printf("Input one integer number:\n");
  scanf("%d",&n);
  if(n<2)
	  printf("NO");
  else
  {
	  for(i=2;i<n-1;i++)
	   {
		   if(n%i==0)
           a++;
	   }
  }
  if(a==0)
	  printf("YES");
  else
	  printf("NO");
return 0;
}