# include<stdio.h>
# define LEN 10
length(int *a)
{
  int k=0;
  while(*a!=0)
  {
	  a++;
	  k++;
  }
  return k;
}
void show(int *a)
{
  int i;
  for(i=0;i<length(a);i++)
	  printf("%5d",a[i]);
}
int find1(int *a,int value)
{
	for(int i=0;i<length(a);i++)
	{
     if(a[i]==value)
	   return i;
  
	}
	return -1;
}

int main(void)
{
	int a[LEN]={3,8,10,12,19};
	printf("the number have %d\n",length(a));
	int m=find1(a,88);
	printf("%d",m);
	putchar('\n');
	return 0;
}