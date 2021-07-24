# include<stdio.h>
int judge(int a)
{
  int i,flag=1;
  for(i=2;i<a;i++)
  {
	  if(a%i==0)
		flag=-1;
	  else
		  ;
  }
  return flag;
}
int main(void)
{
int a;
printf("请输入一个数:\n");
scanf("%d",&a);
int m=judge(a);
if(m==1)
printf("%d为素数\n",a);
else
printf("%d不是素数\n",a);
return 0;
}