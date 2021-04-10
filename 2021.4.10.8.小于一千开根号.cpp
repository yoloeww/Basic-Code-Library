# include<stdio.h>
# include<math.h>
int main(void)
{
    int a,k;
    printf("input a:\n");
	scanf("%d",&a);
	while(a>1000)
	{
	   printf("renew input:\n");
	   scanf("%d",&a);
	}
	k=sqrt(a);
	printf("integra lpart=%d",k);
	return 0;
}
