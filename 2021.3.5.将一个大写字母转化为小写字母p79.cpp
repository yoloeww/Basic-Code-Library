# include<stdio.h>
int main(void)
{
char c1,c2;
c1=getchar();  //从键盘读入一个大写字母 赋给字符变量c1
c2=c1+32;
putchar(c2);
return 0;
}