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
	 printf("#����Ϊ%d",k);
	 printf("@����Ϊ%d",m);
	 return 0;
}