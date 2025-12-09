#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two values:");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("the first value is:%d",a);
	printf("the second value is:%d",b);
	return 0;
}
