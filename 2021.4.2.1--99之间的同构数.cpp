# include<stdio.h>
int main(void)
{
  int i;
  for(i=1;i<=100;i++)
  {
     if(i*i%10==i||i*i%100==i)  //ÿһ����������ƽ�����Ҳ�Ƚ�һ�� �����Ⱦ���ͬ���� 
		 printf("%3d\n",i);       //5��25
  }
 return 0;

}