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
bool invert(int *a,int index,int value)
{
	int len=length(a);
	if(index<0||index>len||len==LEN)
		return false;
	else
	{
	    for(int i=len-1;i>=index;i--)
			a[i+1]=a[i];
		    a[index]=value;
			return true;
	
	}
}
int main(void)
{
	int a[LEN]={3,8,10,12,19};
	invert(a,2,9);
	printf("the number have %d\n",length(a));
	show(a);
	putchar('\n');

return 0;
}
