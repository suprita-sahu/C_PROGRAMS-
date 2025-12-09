#include<stdio.h>
int main()
{
	int a[100];
	int i,n;
	printf("Enter number of elemnts in array");
	scanf("%d",&n);
	printf("Enter numbers ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		printf("even number:%d\n",a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		printf("odd number:%d\n",a[i]);
	}
	return 0;
}
	
	
