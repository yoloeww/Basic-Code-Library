# include<stdio.h>
# include<string.h>
void insert(char str[])
{
  int i;
  for(i=strlen(str);i>0;i--)
  {
    str[2*i]=str[i];
	str[2*i-1]=' ';
  }
}
int main(void)
{
	char str[80];
	printf("please input str:\n");
	gets(str);
	insert(str);
	printf("output :%s\n",str);
	return 0;
}