# include <stdio.h>
int main(int argc,char *argr[])
{
    while(argc>1)
	{
	   ++argv;
	   printf("%s\n",*argv);
	   --argc;
	}
	return 0;

}