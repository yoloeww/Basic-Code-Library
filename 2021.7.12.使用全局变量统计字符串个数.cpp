# include<stdio.h>
# include<string.h>
int k=0;
int m=0;
void num(char *p)
{
   int i;
   for(i=0;i<strlen(p);i++,p++)
   {
      if(*p=='#')
		  k++;
	  else if(*p=='@')
		  m++;
   }
}
int main(void)
{
     char p[100];
	 printf("please input :");
	 gets(p);
	 num(p);
	 printf("#个数为%d",k);
	 printf("@个数为%d",m);
	 return 0;
}