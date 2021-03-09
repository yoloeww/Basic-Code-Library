# include<stdio.h>
int fun (char *p);
int fun (char *p)
{
	int i;
	int j=0;
	for(i=0;p[i]!='\0';i++)
	{
	   if(p[i]!=' '&&p[i+1]=='\0'||p[i+1]==' ')
		   j++;
	}
return j;

}
int main(void)
{
  char p[80];
  printf("input a string:\n");
  gets(p);
  int m=fun(p);
  printf("all have :%d\n",m);
return 0;
}