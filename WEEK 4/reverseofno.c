#include<Stdio.h>
int main()
{
	int i,n,rem,sum=0;
	printf("Enter a number");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		printf("%d",rem);
		n=n/10;		
	}
	return 0;
}
