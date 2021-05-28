# include<stdio.h>
int Max=0,Min=0;
int average(int a,int n)
{
  int i;
  Max=a[0];
  Min=a[0];
  for(i=1;i<n;i++)
   if(a[i]>Max)
	   Max=a[i];
   for(i=1;i<n;i++)
   {
   if(a[i]<Min)
	   Min=a[i];


}
