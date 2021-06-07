# include<stdio.h>
# include<string.h>
void swap(char *p1,char *p2)
{
       char p[20]="0";
	   p[20]=*p2;
	   *p2=*p1;
	   *p1=p[20];
}
int main(void)
{
	char s1[20],s2[20],s3[20];
	printf("input three chars:\n");
	gets(s1);
	gets(s2);
	gets(s3);
	if(strcmp(s1,s2)>0) swap(s1,s2);
		if(strcmp(s1,s3)>0) swap(s1,s3);
			if(strcmp(s2,s3)>0) swap(s2,s3);
	printf("the new order is:\n");
	printf("%s\n%s\n%s\n",s1,s2,s3);
	return 0;
}
