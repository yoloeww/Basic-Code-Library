# include<stdio.h>
void order (int *a,int m)
{
    int i,j,t=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m-i-1;j++)
	{
			if(a[j]>a[j+1])
			{
				t=a[j+1];
			    a[j+1]=a[j];
			    a[j]=t;
			}
	}
	}
}
int main(void)
{
	int a[10]={98,2,4,5,21,412,32,124,2321,23};
	order(a,10);
	for(int i=0;i<10;i++)
		printf("%5d\n",a[i]);
	return 0;

}