#include<stdio.h>
int main()
{
	int a[100],i,n,sum=0;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter numbers:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	sum=sum+a[i];
	printf("The sum of digits of array is:%d",sum);
	return 0;
}
