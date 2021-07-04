# include<stdio.h>
# include<string.h>
int main(void)
{
   struct Student
	  {
       int num;
	   char name[20];
	   char sex;
	   float score;
   };
   struct Student stu1,*p;
   p=&stu1;
   stu1.num=10011;
   strcpy(stu1.name,"liming");
   stu1.sex='M';
   stu1.score=98.2;
   printf("NO.%d\n%s\n%c\n%f\n",stu1.num,stu1.name,stu1.sex,stu1.score);
   printf("NO.%d\n%s\n%c\n%f\n",stu1.num,(*p).name,(*p).sex,(*p).score);
   printf("NO.%d\n%s\n%c\n%f\n",stu1.num,p->name,p->sex,p->score);
   return 0;

}