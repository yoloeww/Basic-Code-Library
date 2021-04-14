# include<stdio.h>
int main(void)
{
	int i,j,sum;
   for(i=2;i<1000;i++)
   {   
	   sum=0;                //一定要注意 这里sum要在for里
	   for(j=1;j<i;j++)
	  	   if(i%j==0)
			   sum+=j;
		       if(i==sum)
			   {
			    printf("%d",i);
			    for(j=1;j<i;j++)
	            if(i%j==0)
		        printf("%5d",j);
				putchar('\n');
			   }
   }
	   return 0;
}

