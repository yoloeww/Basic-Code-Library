# include<stdio.h>
int main(void)
{
   int i,x,y;
   long last=1;
   printf("input x and y:\n");
   scanf("%d%d",&x,&y);
   for(i=1;i<=y;i++)
	   last=last*x%1000;
   printf("the lase 3 digits:%ld\n",last);
   return 0;
}