#include<stdio.h>
int main()
{
	int i,j=0,n1,n2,temp;
	printf("Enter sizes of array:\n");
	scanf("%d%d",&n1,&n2);
	int a[n1];
	int b[n2];
	int c[n1+n2];
	printf("Enter elements:\n");
	for(i=0;i<n1;i++)
	scanf("%d",&a[i]);
	printf("Enter elements for 2nd array:\n");
	for(i=0;i<n1;i++)
	scanf("%d",&b[i]);
	for(j=0;j<n1;j++)
	c[j]=a[j];
	for(j=n1,i=0;j<n2,i<n2;i++,j++)
	c[j]=b[i];
	int n=n1+n2;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(c[j]>c[j+1])
			{
				temp=c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
				
			}
		}
	}
	for(i=0;i<n;i++)
	printf(" %d ",c[i]);
	return 0;	
}
