#include<Stdio.h>
int main()
{
	int i,n,x,sum=0;
	printf("Enter a number");
	scanf("%d",&n);
	x=n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	if(x==sum)
	printf("Perfect number");
	else
	printf("Not perfect no.");
	return 0;
}
