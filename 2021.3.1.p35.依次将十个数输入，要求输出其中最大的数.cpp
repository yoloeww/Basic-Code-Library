# include<stdio.h>
# define N 10
int main(void)
{
	
  int max;
  int i;
  int a[N];
  printf("ÇëÊäÈëÊ®¸öÊý:\n");
  for(i=0;i<10;i++)
  scanf("%d",&a[i]);
  max=a[0];
  for(i=0;i<10;i++)
  {
    if(max<a[i+1])
		max=a[i+1];
	else
		;
  }
 printf("×î´óÖµÎª%d",max);
 return 0;
}
