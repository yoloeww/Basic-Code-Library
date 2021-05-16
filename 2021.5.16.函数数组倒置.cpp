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
void invert (int *a)
{
  int t=0,len=length(a),i;
  for(i=0;i<len/2;i++)
  {
      t=a[len-1-i];
	  a[len-1-i]=a[i];
	  a[i]=t;
  }
}
int main(void)
{
	int a[LEN]={3,8,10,12,19};
	
	printf("the number have %d\n",length(a));
	invert(a);
	show(a);
	putchar('\n');
	return 0;
}