#include<stdio.h>

int main()
{
	int n,min,i,temp,j;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	int a[n];
	printf("enter elemnts:\n");
	for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
    	min=i;
    	for(j=0;j<n-1;j++)
    	{
    		if(a[j]<a[min])
    		{
    			min=j;
			}
		}
		if(i!=min)
		{
		 temp=a[i];
		 a[i]=a[min];
		 a[min]=temp;	
		}
	}
	for(i=0;i<n;i++)
	printf(" %d ",a[i]);
}
    
