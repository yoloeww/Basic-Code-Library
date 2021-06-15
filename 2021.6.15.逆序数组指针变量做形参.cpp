# include<stdio.h>
void v(int *p,int n)
{
   int *start = p,temp;
   int *end = p+n-1;
   while(*start!=*end)
   {
       temp=*end;
	   *end=*start;
	   *start=temp;
	   start++;
	   end--;
   }
   
}
int main(void)
{
  int i,a[10];
  for(i=0;i<10;i++)
  {
	  scanf("%d",&a[i]);
  }
    v(a,10);
  for(i=0;i<10;i++)
	  printf("%5d",a[i]);
  return 0;


}