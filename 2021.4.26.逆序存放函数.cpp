# include<stdio.h>
void fun(int *a,int *b);
int main(void)
{
	int a[5]={2,5,241,4,8},i,j;
	for(i=0;i<5/2;i++)
	{
		fun(&a[i],&a[5-i-1]);
	}
	for(j=0;j<5;j++);
	printf("%d\n",a[j]);
	return 0;
}
void fun(int *a,int *b)
{
   int p;
   p=*a;
   *a=*b;
   *b=p;
}