# include<stdio.h>
int main(void)
{ 
	int n;
	printf("������һ����n:\n");
	scanf("%d",&n);
	if(n%3==0&&n%5==0)
		printf("���������ͬʱ��3��5����\n");
	else
     	printf("�����������ͬʱ��3��5����\n");
    return 0;
}