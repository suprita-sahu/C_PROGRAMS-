#include<stdio.h>
int main()
{
	int a[100],i;
	printf("Enter 6 numbers:\n");
	for(i=0;i<6;i++)
	scanf("%d",&a[i]);
	printf("The subjects entered are:\n");
	for(i=0;i<6;i++)
	printf("%d ",a[i]);
	return 0;
}
