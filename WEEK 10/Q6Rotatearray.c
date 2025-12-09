#include<stdio.h>
int main()
{
	int i,n,k;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter k:");
	scanf("%d",&k);
	for(i=(n/2)+2;i<n;i++)
{
	printf("%d ",a[i-k-1]);
}
for(i=0;i<=(n/2)+1;i++)
{
	printf("%d ",a[i+k]);
}
return 0;
}
