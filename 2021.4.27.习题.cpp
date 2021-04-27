# include<stdio.h>
int main(void)
{
	char a[]="morming",t;
	int i,j=0;
	for(i=1;i<7;i++)
		if(a[j]<a[i])
			j=i;
		t=a[j];
		a[j]=a[i];
		a[i]=a[j];
			puts(a);
		return 0;

}