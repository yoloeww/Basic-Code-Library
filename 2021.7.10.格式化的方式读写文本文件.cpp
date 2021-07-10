# include<stdio.h>
# include<stdlib.h>
int main(void)
{
   FILE *p1;
   if((p1=fopen("D:\\¹ÅÊ«.txt","r"))==NULL)
   {
      printf("false");
	  exit(0);
   }
   FILE *p2;
   if((p2=fopen("D:\\¹ÅÊ«2.txt","w"))==NULL)
   {
      printf("false");
	  exit(0);
   }
   char a[10];
   int b;
   fscanf(p1,"%s%d",a,&b);
   fprintf(p2,"%s\n%d",a,b);
   fprintf(stdout,"%s\n%d\n",a,b);
   fclose(p1);
   fclose(p2);
   return 0;

}
