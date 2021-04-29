# include<stdio.h>
int main(void)
{
	int a[10]={2,4,5,6,7,32,213,43,44,9};
	int i,j,k,t=0;
	for(i=0;i<9;i++)
	{
		k=0;
		for(j=1;j<10-i;j++)
		{
	     if(a[j]>a[k])
			 k=j;
		}
	   t=a[k];
	   a[k]=a[j-1];
	   a[j-1]=t;
	}
	   for(i=0;i<10;i++)
		   printf("%5d",a[i]);
	   putchar('\n');
        return 0;
	   
	}

