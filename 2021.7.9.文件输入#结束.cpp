# include<stdio.h>
# include<stdlib.h>
int main(void)
{
  FILE *fp;
  char ch,name[10];
  printf("���������õ��ļ���:");
  scanf("%s",name);
  getchar();
  if((fp=fopen(name,"w"))==NULL)
  {
     printf("false");
	 exit(-1);
  }
  printf("������һ��׼�����浽���̵��ַ���(��#����):");
  ch=getchar();
  while(ch!='#')
  {
      fputc(ch,fp);
	  putchar(ch);
	  ch=getchar();
  }
  fclose(fp);
  putchar('\n');
  return 0;
}