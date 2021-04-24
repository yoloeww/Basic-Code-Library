# include<stdio.h> 
void calc(float a,float b,float *sum)
{
   *sum=a+b;
}
int main(void)
{
  float x,y,add;
  scanf("%f%f",&x,&y);
  calc(x,y,&add);
  printf("x+y=%f",add);
  return 0;
}
