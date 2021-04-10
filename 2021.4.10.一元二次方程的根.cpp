# include<stdio.h>
# include<math.h>
int main(void)
{
  double a,b,c,disc,x1,x2,realpart,imagpart;
  printf("input a,b,c:\n");
  scanf("%lf%lf%lf",&a,&b,&c);
  if(fabs(a)<=1e-6)
  printf("The equation is not a quadratic\n");
  else
  {
	  disc=b*b-4*a*c;
	  if(fabs(disc)<=1e-6)
	  printf("the equation has two equal roots:%8.4lf\n",-b/(2*a));
	  else
		  if(disc>1e-6)
		  {
		    x1=(-b+sqrt(disc))/(2*a);
	        x2=(-b-sqrt(disc))/(2*a);
			printf("he equation has two real roots:%8.4lf,%8.4lf\n",x1,x2);
		  }
		  else
		  {
		   realpart=-b/(2*a);
		   imagpart=sqrt(-disc)/(2*a);
		   printf("the equation has two complex roots:\n");
		   printf("%8.4lf+%8.4lfi\n",realpart,imagpart);
		   printf("%8.4lf-%8.4lfi\n",realpart,imagpart);
		  }
}
  return 0;
}
