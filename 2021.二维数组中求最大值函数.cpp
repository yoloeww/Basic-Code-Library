# include<stdio.h>
int max_value(int a[][4])
{
 int max,i,j;
 max=a[0][0];
 for(i=0;i<3;i++)
	 for(j=0;j<4;j++)
		 if(max<a[i][j])
			 max=a[i][j];
		 return max;
}
int main(void)
{
	int a[3][4]={{1,3,4,24},{34,23,5,2},{9,224,12,-1}};
	printf("the max of value is %d\n",max_value(a));
	return 0;
}