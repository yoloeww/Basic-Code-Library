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
//���ݵ�ַ��ָ�����
//ָ�����д���������ʽ