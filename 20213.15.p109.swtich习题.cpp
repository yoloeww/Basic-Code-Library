# include<stdio.h>
int main(void)
{
   double score;
   char grade;
   printf("Input score:\n");
   scanf("%lf",&score);
   while(score>100||score<0)
   {
       printf("please input again:\n");
	   scanf("%lf",&score);
   }
   switch((int)(score/10))
   {
    case 10:
	case 9: grade='A';break;
	case 8: grade='B';break;
	case 7: grade='C';break;
	case 6: grade='D';break;
    case 5:
	case 4:
	case 3:
	case 2:			  
	case 1:
	case 0: grade='E';break;
   }
   printf("该学生的成绩为%5.1lf,相应的等级为%c\n",score,grade);
   return 0;
} 