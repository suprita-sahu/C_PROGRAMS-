#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sum=0,i,n;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	int *p=(int*)malloc(n*sizeof(int));
	printf("Enter array elemnts:\n");
	for(i=0;i<n;i++)
	scanf("%d",(p+i));
	for(i=0;i<n;i++)
	sum=sum+*(p+i);
	printf("The sum is:%d",sum);
	return 0;
}
