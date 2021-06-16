# include<stdio.h>
void sort(int *p,int n)
{
    int i,j,temp;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
		{
			if(p[j]<p[j+1])
			{
		    temp=p[j+1];
			p[j+1]=p[j];
			p[j]=temp;
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
