#include<stdio.h>
//dynamic memory allocation
int main()
{
	int n,temp,i,j;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	int a[n];
	printf("enter elemnts:\n");
	for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
    	for(j=0;j<n-i-1;j++)
    	{
    		if(a[j]>a[j+1])
    		{
    			temp=a[j];
    			a[j]=a[j+1];
    			a[j+1]=temp;
			}
		}
	}
	printf("The sorted array is:\n");
	for(i=0;i<n;i++)
	printf(" %d ",a[i]);	
}

