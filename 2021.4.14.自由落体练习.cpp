# include<stdio.h>
int main(void)
{
double sn=100,hn=sn/2;;
int n;;
for(n=2;n<=10;n++)
{
 
  sn=sn+2*hn;
   hn=hn/2;
}
printf("high is%lf",hn);
printf("load is%lf",sn);
return 0;
}