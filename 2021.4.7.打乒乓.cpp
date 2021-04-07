# include<stdio.h>
int main(void)
{
   char a,b,c;
   for(char i='X';i<='Z';i++)
   {
      a=i;
	  for(char j='X';j<='Z';j++)
	  {
	     if(i==j)
			 continue;
		 b=j;
		 for(char k='X';k<='Z';k++)
		 {
		    if(k==i||k==j)
				continue;
			c=k;
			if(a!='X'&&c!='X'&&c!='Z')
				printf("AºÍ%c,BºÍ%c,CºÍ%c\n",a,b,c);
		 }
	  
	  }
   }

return 0;
}