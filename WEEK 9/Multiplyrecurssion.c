#include<stdio.h>
int multiply(int,int);
int main()
{
	int n,n1;
	printf("Enter numbers:\n");
	scanf("%d%d",&n,&n1);
	printf("The product is:%d",multiply(n,n1));
	return 0;
}
int multiply(int a,int b)
{
	if(b==1)
	return a;
	else
	return a+multiply(a,b-1);
}
