#include<stdio.h>
int fact(int);
int main()
{
	int n;
	printf("Enter number:\n");
	scanf("%d",&n);
	printf("The factorial is:\n%d",fact(n));
	return 0;
}
int fact(int a)
{
	if(a==1)
	return 1;
	else
	return a*fact(a-1);
}
