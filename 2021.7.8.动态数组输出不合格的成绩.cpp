# include<stdio.h>
# include<stdlib.h>
void check (int p[])
{
    int i;
	for(i=0;i<5;i++)
		if(p[i]<60)
         printf("%5d",p[i]);
}
int main(void)
{
   int i,*p;
   p=(int *)malloc(5*sizeof(int));
   for(i=0;i<5;i++)
          scanf("%d",&p[i]);
   printf("they are fail:");
   check(p);
   putchar('\n');
   return 0;
}