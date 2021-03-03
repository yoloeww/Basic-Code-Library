# include<stdio.h>
# include<math.h>
int main(void)
{
   float a,b,c,s,area;
   printf("Input three numbers:\n");
   scanf("%f%f%f",&a,&b,&c);
   s=(a+b+c)/2;
   area=sqrt(s*(s-a)*(s-b)*(s-c));
   printf("a=%f\nb=%f\nc=%f\n",a,b,c);
   printf("area=%f\n",area);
   return 0;

}
