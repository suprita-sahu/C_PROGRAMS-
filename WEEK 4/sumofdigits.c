#include<Stdio.h>
int main()
{
	int i,n,rem,sum=0;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("Sum of digits is:%d",sum);
	return 0;
}
