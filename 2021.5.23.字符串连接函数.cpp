# include<stdio.h>
void string (char *p1,char *p2,char str[])
{
	int i=0;
	while(*p1!='\0')
	{
		str[i++]=*p1;
		p1++;
	}
	while(*p2!='\0')
    {
	    str[i++]=*p2;
		p2++;
	}
	str[i]='\0';
}
int main(void)
{
  char str1[80],str2[80],str3[80];
  printf("input two char:\n");
  gets(str1);
  gets(str2);
  string(str1,str2,str3);
  printf("the new char is :");
  puts(str3);
  return 0;
}