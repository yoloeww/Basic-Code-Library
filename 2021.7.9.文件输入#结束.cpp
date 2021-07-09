# include<stdio.h>
# include<stdlib.h>
int main(void)
{
  FILE *fp;
  char ch,name[10];
  printf("请输入所用的文件名:");
  scanf("%s",name);
  getchar();
  if((fp=fopen(name,"w"))==NULL)
  {
     printf("false");
	 exit(-1);
  }
  printf("请输入一个准备储存到磁盘的字符串(以#结束):");
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