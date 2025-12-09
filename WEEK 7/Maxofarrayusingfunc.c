#include<stdio.h>
int max(int[],int);
int main()
{
	int i,j,n;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("The maximum elemnt is:%d",max(a,n));
	return 0;
}
int max(int x[],int n1)
{
	int i,maximum=x[0];
	for(i=0;i<n1;i++)
	{
		if(x[i]>maximum)
		maximum=x[i];
	}
	return maximum;
}
