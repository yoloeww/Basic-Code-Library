# include<stdio.h>
# include<string.h>
int main(void)
{
  char str[3][80];
  char string[20];
  for(int i=0;i<=2;i++)
    gets(str[i]);
  if((strcmp(str[0],str[1])>0))
	  strcpy(string,str[0]);
  else
	  strcpy(string,str[1]);
  if((strcmp(string,str[2])>0))
	  ;
  else
      strcpy(string,str[2]);
  printf("the largest string is: %s\n",string);
  return 0;


}