# include<stdio.h>
# include<stdlib.h>
struct Student
{
	 int num;
     int data;
	 struct Student *next;
}n;
struct Student *create(void)
{
  struct Student *head=(struct Student*)malloc(sizeof(n));
  if(head==NULL)
  {
	  printf("false");
  exit(-1);
  }
  head->next=NULL;
  return head;
} 
void input(struct Student*head,int value)
{
   struct Student *last=(struct Student *)malloc(sizeof(n));
   if(last==NULL)
   {
      printf("false");
	  exit(-1);
   }
   last->data=value;
   last->next=NULL;
   while(head->next!=NULL)
	   head=head->next;
   head->next=last;
}
void show(struct Student *head)
{
  while(head->next!=NULL)
  {
	  head=head->next;
	  printf("%d\n",head->data);
  }
}
int main(void)
{
  struct Student*head=create();
  input(head,87);
  input(head,98);
  show(head);
  return 0;
}