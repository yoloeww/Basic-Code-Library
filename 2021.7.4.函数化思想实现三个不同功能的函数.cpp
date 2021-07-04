# include<stdio.h>
# define N 3
struct Student
{
  int num;
  char name[20];
  float score[N];
  float aver;
};
void input (struct Student stu[])
{
    int i;
	printf("please input student message:num,name,score and grade:\n");
	for(i=0;i<3;i++)
	{
	  scanf("%d%s%f%f%f",&stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
	  stu[i].aver=((stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0);
	}
}
struct Student max(struct Student stu[])
{
   int i,m=0;;
   for(i=0;i<N;i++)
   {
      if(stu[i].aver>stu[i].aver)
		  m=i;
   }
   return stu[m];
}
void print(struct Student stud)
{
 printf("\n the highest score is \n");
 printf("学号:%d\n姓名%s\n三门成绩分别为%5.1f%5.1f%5.1f\n平均成绩为%5.1f\n",stud.num,stud.name,stud.score[0],stud.score[1],stud.score[2],stud.aver);
}
int main(void)
{
  struct Student stu[N];
  input(stu);
  print(max(stu));
  return 0;

}