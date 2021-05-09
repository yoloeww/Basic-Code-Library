# include<stdio.h>

int main(void)
{
  char a[80],b[80];
  int i,j,n=0;
  printf("input a and b:\n");
  gets(a);
  gets(b);
  for(i=0;a[i]!='\0';i++)
	  n=i;
  for(j=0;b[j]!='\0';j++,n++)
	  a[n]=b[j];
      a[n]='\0';
  printf("the new stream is:");
  puts(a);
  return 0;
}