# include<stdio.h>
int max(int *p,int n)
{
  int max,i=0;
  max=*p;
  while(i!=10)
  {
	  if(*p++>max)
		  max=*p++;
	  i++;
  }
	  return max;
}
int main(void)
{
  int a[10],m,n,i;
  printf("please input ten numbers:\n");
  for(i=0;i<10;i++)
	  scanf("%d",&a[i]);
  for(i=i)
}