# include <stdio.h>
void asd(int *m)
{
 * m=10;
}
int main(void)
{
  int *p,a;
  p=&a;
  asd(p);
  printf("%d",a);
  return 0;
}
//传递地址用指针接受
//指针可以写成数组的形式