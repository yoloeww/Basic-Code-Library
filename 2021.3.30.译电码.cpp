# include<stdio.h>
int main(void)
{
   char c;
   int i;
   printf("input c:\n");
   while((c=getchar())!='\n')
   {
      if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
	  {
		  c=c+4;
	      if((c>'Z'&&c<='Z'+4)||c>'z')
		  c=c-26;
	  }
	   printf("%c",c);
   }
   putchar('\n');
   return 0;
}