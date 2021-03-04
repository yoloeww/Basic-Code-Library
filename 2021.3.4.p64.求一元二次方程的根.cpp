# include<stdio.h>
# include<math.h>
int main(void)
{
   double a,b,c,x1,x2,p1,p2,k;
   printf("Input three numbers represent coefficient:\n");
   scanf("%lf%lf%lf",&a,&b,&c);
   p1=-b/2*a;
   p2=sqrt(b*b-4*a*c)/2*a;
   k=b*b-4*a*c;
   if(k>0)
	   printf("%7.2lf\n%7.2lf:\n",p1+p2,p1-p2);
   else if(k==0)
       printf("%7.2lf:\n",p1+p2);
   else
       printf("The equation  has no solution\n");
   return 0;
}