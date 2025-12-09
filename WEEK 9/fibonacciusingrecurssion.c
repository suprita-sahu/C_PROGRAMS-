#include<stdio.h>
int fib(int);
int main()
{
	int n;
	printf("Enter number:\n");
	scanf("%d",&n);
	printf("The term is:%d",fib(n));
	return 0;
}
int fib(int a)
{
	if(a==0||a==1)
	return a;
	else
	return fib(a-1)+fib(a-2);
}
