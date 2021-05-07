# include<stdio.h>
# define M 4
# define N 5
int main(void)
{
  int i,j,k,max,maxj,a[M][N],flag;
  for(i=0;i<M;i++)
	  for(j=0;j<N;j++)
		  scanf("%d",&a[i][j]);
  for(i=0;i<M;i++)
  {
	  max=a[i][0];
      maxj=0;
	  for(j=0;j<N;j++)
	  {
	      if(max<a[i][j])
		  {
		     max=a[i][j];
             maxj=j;
		  }
	  }
		  flag=1;
		  for(k=0;k<M;k++)
		  {  
			  if(max>a[k][maxj])
			  {
			  flag=0;
		      continue;
			  }
		  }
		  if(flag)
		  {
			  printf("the saddle spot is a[%d][%d]=%d\n",i,maxj,max);
			   break;
		  }
  }
         if(!flag)
			 printf("it not exist saddle spot\n");
         return 0;
}