# include<stdio.h>
int main(void)
{
   char str[80];
   int i,num=0;
   gets(str);
   for(i=0;str[i]!='\0';i++)
	   if(str[i]!=' '&&str[i+1]==' '||str[i+1]=='\0')  // ֻҪǰ��һ���ַ���Ϊ�ո�����һ����ĸΪ�ո������'\0'��ô��һ������
		   num++;
     printf("the string have %d word\n",num);
	 return 0;

}