# include<stdio.h>
# include<string.h>
struct Person
{
   char name[20];
   int count;
}leader[3]={"mu",0,"asd",0,"lei",0};
int main(void)
{
   int i,j;
   char leadername[20];
   for(i=1;i<=10;i++)
   {
     scanf("%s",leadername);
     for(j=0;j<3;j++)
	 {
		 if(strcmp(leadername,leader[j].name)==0)
			 leader[j].count++;
	 }
   }
printf("\nthe result is:\n");
for(i=0;i<3;i++)
{
  printf("%5s,%5d\n",leader[i].name,leader[i].count);
  return 0;
}

}