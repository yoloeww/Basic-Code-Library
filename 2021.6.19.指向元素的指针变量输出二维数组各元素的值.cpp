# include<stdio.h>
int main(void)
{
    int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12},i,*p;
	p=a[0];
	for(i=0;i<12;i++)
	{
		if(i%4==0)
			putchar('\n');
			printf("%5d",*p++);
	}
	putchar('\n');
	return 0;
}