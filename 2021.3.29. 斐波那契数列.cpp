# include<stdio.h>
int main(void)
{
    int i,f1=1,f2=1,f3;
	for(i=1;i<=20                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      ;i++)
	{
		printf("%12d%12d",f1,f2);
		if(i%2==0) 
		putchar('\n');
		f1=f1+f2;
		f2=f2+f1;
	}
	return 0;
}