#include<Stdio.h>
{
	int i,n,x,sum=0;
	printf("Enter a number");
	scanf("%d",&n);
	x=n;
    int main()
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	if(x==sum)
	printf("Prime number");
	else
	printf("Not a prime number");
	return 0;
}

