# include<stdio.h>
# define N 3
double fun(int a[][N]);
double fun(int a[][N])
{
   int i,j;
   double m=0;
   int l=0;
   for(i=0;i<N;i++)
	   for(j=0;j<N;j++)
	   {
		   if(i==0||j==N-1||j==0||i==N-1)
		   {
			   m+=a[i][j];
		       l++;
		   }
	   }
	   return m/l;
}
int main(void)
{
	int a[N][N];
	int i,j;
	double k;
	printf("Input numbers:\n");
	for(i=0;i<N;i++)
	{
	   for(j=0;j<N;j++)
		   scanf("%d",&a[i][j]);
	}
    k=fun(a);
    printf("%lf",k);
    return 0;
}