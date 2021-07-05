# include<stdio.h>
struct Student
{
     int num;
	 float score;
	 struct Student *next;
};
int main(void)
{
  struct Student a,b,c,*head,*p;
  a.num=10001;
  a.score=98.2;
  b.num=10002;
  b.score=97.2;
  c.num=10003;
  c.score=92.3;
  head=&a;
  a.next=&b;
  b.next=&c;
  c.next=NULL;
  p=head;
  do
  {
     printf("%d%5.1f\n",p->num,p->score);
	 p=p->next;
  }while(p!=NULL);
  return 0;
}