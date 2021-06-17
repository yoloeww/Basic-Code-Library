# include<stdio.h>
int main(void)
{
	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	int *p;
	for(p=a[0];p<a[0]+12;p++)
	{
		if((p-a[0])%4==0)
			putchar('\n');
			printf("%4d",*p);
	}
    putchar('\n');
	return 0;
}