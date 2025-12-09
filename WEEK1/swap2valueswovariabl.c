#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter 2 values:");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The two values are:%d%d",a,b);
	return 0;
}
