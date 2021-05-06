# include<stdio.h>
int main(void)
{
	int a[3][3]={1,2,3,
	         	 4,5,6,
		         7,8,9};
	int i,j,sum=0;
	for(i=0;i<3;i++)
		sum+=a[i][i];
	printf("sum=%d\n",sum);
		return 0;
}
