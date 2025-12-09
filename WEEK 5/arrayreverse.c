#include<stdio.h>
int main()
{
	int a[100],i,n;
	printf("Enter number of subjects");
	scanf("%d",&n);
	printf("Enter numbers:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=n-1;i>=0;i--)
	printf("%d ",a[i]);
	return 0;
}
