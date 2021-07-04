# include<stdio.h>
  struct Student
  {
    int num;
	char name[20];
	char sex;
	double score;
}; 
  struct Student stu[3]=
  {
{1001,"muxue",'w',98.2},
  {1002,"masd",'m',23.2},
{1003,"ff",'w',92}};
  int main(void)
  {
struct Student *p;
  for(p=stu;p<stu+3;p++)
	  printf("%d\n%s\n%6.3lf\n",p->num,p->name,p->score);
  return 0;
}