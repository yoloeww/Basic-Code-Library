# include<stdio.h>
/*
int main(void)
{
    int i=1,sum=0;
	do
	{
		sum+=i;
		i++;
	}
    while(i<=100);
	printf("%d\n",sum);
	return 0;
}*/
/*int main(void)
{
   int i=1,sum=0;
   while(i<=100)
   {
       sum+=i;
	   i++;
   }
   printf("%d\n",sum);
   return 0;
}
*/
int main(void)
{
    int sum=0;
	for(int i=0;i<=100;i++)
	{
		sum+=i;
	}
	printf("%d\n",sum);
    return 0;
}
