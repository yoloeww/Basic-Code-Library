# include<stdio.h>
int main(void)
{
  float amount,total,aver;
  int i;
  for(i=1,total=0;i<1000;i++)
  {  
	  printf("please input amount:\n");
	  scanf("%f2",&amount);
	  total+=amount;
	  if(total>=100000) break;
  }	 
  aver=total/i;
  printf("num=%d,aver=%10.2f",i,aver);
  return 0;
}