# include<stdio.h>
int main(void)
{
	char *name[]={"Follow me","sad","kask jds","kkdsa"};
	char **p;
	int i;
	for(i=0;i<4;i++)
	{
	    p=name+i;
		printf("%s\n",*p);
	}
return 0;

}