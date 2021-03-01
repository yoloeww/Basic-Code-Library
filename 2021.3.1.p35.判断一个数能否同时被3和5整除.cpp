# include<stdio.h>
int main(void)
{ 
	int n;
	printf("请输入一个数n:\n");
	scanf("%d",&n);
	if(n%3==0&&n%5==0)
		printf("这个数可以同时被3和5整除\n");
	else
     	printf("这个数不可以同时被3和5整除\n");
    return 0;
}