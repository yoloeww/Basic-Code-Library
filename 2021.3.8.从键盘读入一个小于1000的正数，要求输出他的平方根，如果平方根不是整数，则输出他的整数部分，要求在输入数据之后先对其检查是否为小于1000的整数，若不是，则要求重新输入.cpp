# include<stdio.h>
# include<math.h>
int main(void)
{
	int n;
	printf("Input one number < 1000:\n");
	scanf("%d",&n);
	if(n>1000)
	{
    printf("Input again :\n");
	scanf("%d",&n);
	}
	if(sqrt(n)==0)
		printf("sqrt(n):\n");
	else
		printf("%d\n",int(sqrt(n)));
return 0;
}