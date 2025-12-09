#include<Stdio.h>
int main()
{
	int i,n,rem,x,fact=1,sum=0;
	printf("Enter a number");
	scanf("%d",&n);
	x=n;
	while(n>0)
	{
		rem=n%10;
		for(i=1;i<=rem;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(sum==x)
	printf("Strong number");
	else
	printf("Not a strong number");
	return 0;
}
