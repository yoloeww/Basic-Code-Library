# include<stdio.h>
int main(void)
{
	int a[10]={23,4,123,53,43,22,33,221,51,9};
	int i,j,t;
	int len=10;
	for(i=0;i<len-1;i++)
	{   
		t=0;            //һ��Ҫע�� tΪ0��ʼ �ӵ�һ����ʼ�Ƚ�
		for(j=1;j<len-i;j++)
        {
			if(a[t]<a[j])
				t=j;
		}
		int b=0; 
		b=a[j-1];      //ÿ�ζ����� ÿ�ζ���һ 
		a[j-1]=a[t];
		a[t]=b;
	}
	for(int k=0;k<len;k++)
		printf("%5d",a[k]);
	return 0;
}