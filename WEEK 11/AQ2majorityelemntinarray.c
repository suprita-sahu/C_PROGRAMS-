#include<stdio.h>
int main()
{
	int i,j,x,count=0,n;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	printf("Enter elements:\n");
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
			count++;
		    }
		}
		if(count>n/2)
	printf("The majority element is:%d",a[i]);
	break;
	}
	return 0;
}

	
