#include<stdio.h>
int main()
{
	int i,y,n,temp;
	printf("Enter number of numbers in array");
	scanf("%d",&n);
	int a[n];
	printf("Enter numbers:p");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter number to be found in array");
	scanf("%d",&y);
	for(i=0;i<n;i++)
	{
		if(a[i]==y)
		temp=i;
	}
	if(temp>=0&&temp<=n-1)
	printf("The index of the given value is:%d",temp);
	else
	printf("Number not present");
	return 0;
}
