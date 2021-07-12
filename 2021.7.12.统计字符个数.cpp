# include<stdio.h>
# include<string.h>
void num(char *p,int *k,int *m)
{
   int i;
   for(i=0;i<strlen(p);i++,p++)
   {
      if(*p=='#')
		  (*k)++;
	  else if(*p=='@')
		  (*m)++;
   }
}
int main(void)
{
     char p[100];
	 int k=0,m=0;
	 printf("please input :");
	 gets(p);
	 num(p,&k,&m);
	 printf("#个数为%d",k);
	 printf("@个数为%d",m);
	 return 0;
}