# include<stdio.h>
int main(void)
{
   char str[80];
   int i,num=0;
   gets(str);
   for(i=0;str[i]!='\0';i++)
	   if(str[i]!=' '&&str[i+1]==' '||str[i+1]=='\0')  // 只要前面一个字符不为空格并且下一个字母为空格或者让'\0'那么是一个单词
		   num++;
     printf("the string have %d word\n",num);
	 return 0;

}