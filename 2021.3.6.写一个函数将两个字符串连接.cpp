# include<stdio.h>
# include<string.h>
void line(char str1[],char str2[],char str3[])
{
   for(int i=0;i<strlen(str1);i++)
	   str3[i]=str1[i];
   for(int j=0;j<strlen(str2);j++)
	   str3[i+j]=str2[j];
       str3[i+j]='\0';
}
int main(void)
{
  char str1[100],str2[100],str3[100];
  printf("Input the first character strings:\n");
  scanf("%s",str1);
  printf("Input the second character strings:\n");
  scanf("%s",str2);
  line(str1,str2,str3);
  puts(str3);
  return 0;
}