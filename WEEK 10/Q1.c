#include<stdio.h>
int rem,x,n,sum=0;
int main()
{
	printf("Enter a number:\n");
	scanf("%d",&n);
	if(digitsum(n)<10)
	printf("%d",digitsum(n)/2);
	else
	{
		while(digitsum(n)>10)
	printf("%d",digitsum(digitsum(n)));
   }
	return 0;
}
int digitsum(int a)
{
	while(a>0)
	{
		rem=a%10;
		sum=sum+rem;
		a=a/10;
	}
	return sum;
}
