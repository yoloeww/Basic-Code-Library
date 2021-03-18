# include<stdio.h>
# define N 3
int main(void)
{
  int i,j;
  int a[N][N];
   printf("input number:\n");
   for(i=0;i<N;i++)
  {
	  for(j=0;j<N;j++)
		  scanf("%d",&a[i][j]);
  }
  for(i=0;i<N;i++)
  {
	  for(j=0;j<N;j++)
	  {
	    a[i][j]=a[j][i];
	  }
  }
  for(i=0;i<N;i++)
  {
	  for(j=0;j<N;j++)
	  {
		  printf("%5d",a[i][j]);
	  }
	  putchar('\n');  
  }
  return 0;
}