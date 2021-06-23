# include<stdio.h>
int main(void)
{
	int a[3]={2,23,6}; 
	int i,j,k;
	for(i=0;i<2;i++)
	{
     	for(j=0;j<2-i;j++)
        {
		  if(a[j]<a[j+1])
		  {
		      k=a[j+1];
			  a[j+1]=a[j];
			  a[j]=k;
		  }
		}
	}
	for(j=0;j<3;j++)
	printf("%d",a[j]);

return 0;
}
