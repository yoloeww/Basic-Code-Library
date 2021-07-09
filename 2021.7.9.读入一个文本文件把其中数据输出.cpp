# include<stdio.h>
# include<stdlib.h>
int main(void)
{
	char name[5000]="D:\\¹ÅÊ«.txt";
	FILE *fp =fopen(name,"r");
	if(fp==NULL)
	{
	    printf("false");
		exit(-1);
	}
	FILE *fp2 =fopen("D:\\¹ÅÊ«2.txt","w");
	if(fp2==NULL)
	{
	    printf("false");
		exit(-1);
	}
	char ch;
	while((ch=fgetc(fp))!=EOF)
		fputc(ch,fp2);
	fclose(fp);
	fclose(fp2);
	return 0;
}