#include<stdio.h>
int main()
{
	int n,i,j,flag=0;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elemnts:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("The leaders are:\n");
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]<a[j])
		{
			break;
		}
	}
	if(j==n)
	printf(" %d ",a[i]);
}
return 0;
}
