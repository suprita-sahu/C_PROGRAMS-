#include<stdio.h>
#include<math.h>
int strong(int);
int armstrong(int);
int main()
{
	int i;
	for(i=1;i<=1000;i++)
	{
		if(strong(i)==armstrong(i))
		printf("%d",i);
	}
	return 0;
}
int strong(int a)
{
	int rem,fact=1,sum=0,i,x;
	while(a!=0)
	{
		x=a;
		rem=a%10;
		for(i=1;i<=rem;i++)
		fact=fact*i;
		sum=sum+fact;
		a=a/10;
	}
	    if(sum==x)
		return sum;
		else
		return 2;
}
int armstrong(int b)
{
	int rem,sum=0,d,y=b,x=b;
	while(b!=0)
	{
		rem=b%10;
		sum=sum+pow(rem,2);
		b=b/10;
	}
	if(x==sum)
	return sum;
	else 
	return 1;
}
