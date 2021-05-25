# include<stdio.h>
float average(float a[],int n)
{
  float sum=0;
  int i;
  for(i=0;i<n;i++)
	  sum+=a[i];
  return sum/n;
}
int main(void)
{
	float a[10]={23.3,25.5,42.4,123,23.12,33,215,31.6,98,10.5};
	float b[5]={23,255,5.2,235,21.5};
	printf("the ave of a is %5.2f\n",average(a,10));
	printf("the ave of b is %5.2f\n",average(b,5));
return 0;


}