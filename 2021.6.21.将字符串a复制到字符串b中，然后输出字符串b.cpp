# include<stdio.h>
int main(void)
{
	char a[]="asds asd d";
	char b[20];
	while(*a!='\0')
	{
		*(b++)=*(a++);
	    *b='\0';
	}
		puts(b);
		return 0;

}