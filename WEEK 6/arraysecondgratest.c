#include<stdio.h>
int main()
{
	int a[100];
	int i,y,x,n;
	printf("Enter number of numbers in array");
	scanf("%d",&n);
	printf("Enter numbers ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	x=a[0];
	for(i=0;i<n;i++)
	{
	if(a[i]>x)
	x=a[i];
    }
    printf("The greatest number is%d\n",x);
    y=a[0];
    for(i=0;i<n;i++)
    {
    	if(a[i]>y&&a[i]<x)
    	y=a[i];
	}
	
	printf("The second greatest number is %d",y);
	return 0;
}
