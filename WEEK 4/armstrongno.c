#include<math.h>
#include<Stdio.h>
int main()
{
	int n,rem,y,sum=0,x,count=0;
	printf("Enter a number");
	scanf("%d",&n);
	x=n;
	y=n;
	while(y!=0)
	{
		count++;
		y=y/10;
	}
	while(n>0)
	{
		rem=n%10;
		sum=sum+pow(rem,count);
		n=n/10;
	}
	if(sum==x)
	printf("armstrong number");
	else
	printf("Not armstrong");
	return 0;
}
