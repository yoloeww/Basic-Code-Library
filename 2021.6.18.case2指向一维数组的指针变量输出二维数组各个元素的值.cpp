# include<stdio.h>
int main(void)
{
    int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12},i,j;
	int (*p)[4]=a;
	for(i=0;i<3;i++)
	{
		putchar('\n');
		for(j=0;j<4;j++)
		{
			
			printf("%5d",*(*(p+i)+j));
		}
	}
	putchar('\n');
	return 0;
}