#include<stdio.h>
int main()
{
	int n,i,j,k,sum=0;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	int a[n];
	int b[n/4];
	printf("Enter elemnts:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0,k=0;i<n;i++)
	{
		for(j=i;j<=i+4;j++)
		{
		sum=sum+a[j];
		b[k]=sum;
		k++;
	}
	int max=b[0];
	for(i=0;i<n/4;i++)
	{
		if(b[i]>max)
		max=b[i];
		
	}
	printf("Maximum sum:\n%d",max);
	return 0;
	}
}
