# include<stdio.h>
void input(int *p)
{
   int i;
   for(i=0;i<10;i++)
   {
	   scanf("%d",&p[i]);
   }
}
void max_min(int *p)
{
  int i,max=p[0],min=p[0],t;
  for(i=0;i<10;i++)
  {
    if(max<p[i])
		max=p[i];
	if(min>p[i])
		min=p[i];
  }
     t=p[9];
	 p[9]=max;
	 max=t;
     t=p[0];
	 p[0]=min;
	 min=t;
  }
int main(void)
{
	int a[10];
	printf("input ten numbers:\n");
	input(a);
	max_min(a);
	for(int i=0;i<10;i++)
	printf("%8d",a[i]);

}