# include<stdio.h>
# include<string.h>
int main(void)
{
	char a[ ]="abjklmn",b[ ]="bcdr",c[80];
	char *p;
	int i=0,j=0,k=0;
	while(a[i]!='\0'&&b[j]!='\0')
	{
      if(a[i]<b[j])
	  {
		  c[k]=a[i];
		   i++;
	  }
	  else
	  {
		  c[k]=b[j];
	       j++;
	  }
	  k++;
	}
    c[k]='\0';
	if(a[i]=='\0')
		p=b+j;
	else
		p=a+i;
	strcat(c,p);
	puts(c);
	return 0;
}