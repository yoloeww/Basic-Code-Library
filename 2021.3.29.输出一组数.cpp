# include<stdio.h>
int main(void)
{
	int i,j,n=0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++,n++)
			printf("%5d",i*j);
		     if(n%5==0)  
			   putchar('\n');
	}
	putchar('\n');
	return 0;

}