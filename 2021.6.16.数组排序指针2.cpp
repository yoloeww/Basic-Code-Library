# include<stdio.h>
void sort(int *p,int n)
{
    int i,j,temp,*k;
	k=p;
	for(i=0;i<n-1;i++)
	{
			k=p;
  			if(*k<*(k+1))
			{
		    temp=*(k+1);
			*(k+1)=*k;
			*k=temp;
			}
	}
}
int main(void)
{
	int a[10]={2,321,42,4,242,23,-1,2344,233,222},i;
	sort(a,10);
	for(i=0;i<10;i++)
		printf("%5d\n",a[i]);
	return 0;
}