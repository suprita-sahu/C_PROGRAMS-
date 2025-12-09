#include<Stdio.h>
int main()
{
	int i,n,rem,sum=0,x;
	printf("Enter a number");
	scanf("%d",&n);
	x=n;
	for(i=1;i<=n;i++)
	{
		rem=n%10;
		sum=(sum*10)+rem;
		n=n/10;
	}
	if(sum==x)
	{
		printf("Palindrome");
	}
	else
	printf("Not a palindrome number");
	return 0;
}
