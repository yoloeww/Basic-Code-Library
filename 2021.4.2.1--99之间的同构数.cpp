# include<stdio.h>
int main(void)
{
  int i;
  for(i=1;i<=100;i++)
  {
     if(i*i%10==i||i*i%100==i)  //每一个数的与他平方的右侧比较一下 如果相等就是同构数 
		 printf("%3d\n",i);       //5与25
  }
 return 0;

}