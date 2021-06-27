# include<stdio.h>
float * search(float (*pointer)[4],int n)
{
  float *pt;
  pt=*(point+n);
  return pt;
}
int main(void)
{
	float score[][4]={{33,23,41,34},{53,52,55,33},{98,54,65,34}};
	float *p;
	int i,k;
	printf("enter the number of student:");
	scanf("%d",&k);
	printf("the scores of NO.%d are:\n",k);
	p=search(score,k);
	for(i=0;i<4;i++)
	{  
		printf("%5f",*(p+i));
	    putchar('\n');
	}
	return 0;
}

}