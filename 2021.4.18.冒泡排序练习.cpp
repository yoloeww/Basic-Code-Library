# include<stdio.h>
int main(void)
{ 
   int i,j,t=0;
   int a[10];
    printf("input ten numbers:\n");
   for(i=0;i<10;i++)
	   scanf("%d",&a[i]);
   for(i=0;i<9;i++)
	   for(j=0;j<9-i;j++)
		   if(a[j]>a[j+1])
		   {
			 t=a[j];
			 a[j]=a[j+1];
             a[j+1]=t;
		   }
   for(j=0;j<10;j++)
   printf("%5d",a[j]);
  return 0;
   

}