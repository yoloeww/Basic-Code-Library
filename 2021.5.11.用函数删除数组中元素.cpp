# include<stdio.h>
# define LEN 10
int length(int *a)
{
    int j=0;
	while(j<LEN)
	{
	  if(a[j]==0)
		  break;
	  else
		  j++;
	}
return j;
}
void show(int *a)
{ 
   int i=0;
   int len=length(a);
   for(i=0;i<len;i++)
   {
      printf("%5d",a[i]);   
   }
   putchar('\n');
}
bool del(int *a,int index)
{
  int len=length(a);
  if(len==0||index>=len)
     return false;
  else
  {
     for(int i=index+1;i<len;i++)
	     a[i-1]=a[i];
		 a[len-1]=0;
         return true;
  }


}
int main(void)
{
	int a[LEN]={2,5,15,52,23};
	printf("efficent number is%d\n",length(a));
	if(del(a,5))
    show(a);
	else
	printf("delpete false\n");
	return 0;
}