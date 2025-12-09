#include<stdio.h>
int main()
{
	int i,n,greatest,sgreatest;
	printf("Enter array size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter values of array:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	greatest=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>greatest)
		greatest=a[i];
	}
	sgreatest=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<greatest&&a[i]>sgreatest)
		sgreatest=a[i];
	}
	printf("The greatest value is:%d\n",greatest);
	printf("The second greatest value is:%d",sgreatest);
	return 0;
}
