#include<stdio.h>
int main()
{
	int i,j,n,temp;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elemnts:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j-0;j<n-1;j++)
		{
			if(a[i]>a[i+1])
			{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;	
			}
		}
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i+1]!=a[i]+1)
		{
		printf("Missing index=%d",a[i]+1);
		break;
	}
		
	}
	return 0;
	
}
