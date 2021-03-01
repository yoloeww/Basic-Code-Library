# include<stdio.h>
int main(void)
{
	int a,b,c,d;
	printf("请输入两个数a,b:\n");
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
	 printf("最大公约数为%d",b);
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
     printf("最大公约数为%d",a);
	}
	 return 0;
	 
 }
