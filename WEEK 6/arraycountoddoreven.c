#include<stdio.h>
int main()
{
	int a[100];
	int even,odd,i,n;
	printf("Enter number of elemnts in array");
	scanf("%d",&n);
	printf("enter array values");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		even++;
		else
		odd++;
	}
	printf("The number of even numbers are:%d\n",even);
	printf("The number of odd numbers are:%d",odd);
	return 0;
}
