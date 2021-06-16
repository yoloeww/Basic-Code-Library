# include<stdio.h>
void average(float *p,int n)
{
    float *p_end;
	float sum=0,aver;
	p_end=p+n-1;
	for(;p<p_end;p++)
		sum=sum+(*p);
	aver=sum/n;
	printf("average=%5.2f\n",aver);
}
void search(float (*p)[4],int n)
{
  int i;
  printf("the score of no.%d are:\n",n);
  for(i=0;i<4;i++)
	  printf("%5.2f",*(*(p+n)+i));
  printf("\n");

}
int main(void)
{
	float score[3][4]={{21,54,65,76},{98,99,87,88},{100,82,44,77}};
	average(*score,12);
	search(score,2);
	return 0;

}
