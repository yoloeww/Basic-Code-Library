# include<stdio.h>
int main(void)
{
  int grade,k;
  char level ;
  printf("input garde:\n");
  scanf("%d",&grade);
  while(grade>100||grade<0)
  {
     printf("have error,please renew input\n");
	 scanf("%d",&grade);
  }
  if(grade>=90)
	 k=0;
  else if(grade>=80&&grade<=89)
	 k=1;
  else if(grade>=70&&grade<=79)
	 k=2;
  else if(grade>=60&&grade<=69)
	 k=3;
  else
	 k=4;
  switch(k)
  {
	  case 0: level='A'; break;
	  case 1: level='B'; break;
	  case 2: level='C'; break;
	  case 3: level='D'; break;
	  case 4: level='E'; break;
  }
   printf("you grade is %d\nlevel is %c\n",grade,level);
   return 0;
  }
