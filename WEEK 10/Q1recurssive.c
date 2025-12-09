#include<stdio.h>
int sumdigit(int);
int main()
{
	int n,x,y;
	printf("Enter a number:\n");
	scanf("%d",&n);
	y=sumdigit(n);
	if(sumdigit(n)<10)
	printf("%d",sumdigit(n));
	else if(sumdigit(n)>=10)
	{
	 x=sumdigit(y);
	 printf("%d",x);
	}
	return 0;
}
int sumdigit(int a)
{
	int rem,sum=0;
	while(a!=0)
	{
		rem=a%10;
		sum=sum+rem;
		a=a/10;
	}
	return sum;
}
