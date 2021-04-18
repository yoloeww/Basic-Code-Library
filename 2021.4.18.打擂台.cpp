# include<stdio.h># include<stdio.h>
int main(void)
{
   //	int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int a[3][4];
	int i,j,t=0,max=0,row=0,column=0; 
	printf("input number of array:\n");
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)	
			scanf("%d",&a[i][j]);
	max=a[0][0];
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			if(a[i][j]>max)
			{
			    t=a[i][j];
				a[i][j]=max;
				max=t;
				row=i;
				column=j;
			}
			printf("the large number is%d\nis %d row\nis %d column",max,row,column);
			printf("\n");
    return 0;}
