# include<stdio.h>
int main(void)
{
	int a,b,c,d;
	printf("������������a,b:\n");
	scanf("%d%d",&a,&b);
	if(a>=b)
	{
	  c=a%b;
	  while(c!=0)
	  {
	      a=b;;
		  b=c;
		  a=a%b;
	  }
	 printf("���Լ��Ϊ%d",b);
	}
	 else
	 {
	   d=b%a;
	   while(d!=0)
	   {
         b=a;
		 a=d;
		 d=b%a;
	  }
     printf("���Լ��Ϊ%d",a);
	}
	 return 0;
	 
 }
