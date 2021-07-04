# include<stdio.h>
# define n 3
struct Student
{
   int num;
   char name[20];
   float score;
}stu[3]={{1001,"liming",98},{1002,"muti",100},{1003,"liuming",99}},temp;
int main(void)
{
	int i,j,k;
		printf("the order is:\n");
		putchar('\n');
	for(i=0;i<n-1;i++)
	{
		k=i;
        for(j=i+1;j<n;j++)
        if(stu[j].score>stu[k].score)
			k=j;
		temp=stu[k];
		stu[k]=stu[i];
		stu[i]=temp;
    }
for(i=0;i<n;i++)
{
printf("%d\n%s\n%6.3f\n",stu[i].num,stu[i].name,stu[i].score);
putchar('\n');
}
return 0;
}