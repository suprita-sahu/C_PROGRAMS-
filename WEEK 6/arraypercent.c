#include<stdio.h>
int main()
{
	float marks,n,max,percentage,sum=0;
	int i;
	float a[100];
	printf("Enter number of subjects");
	scanf("%f",&n);
	printf("enter Total marks");
	scanf("%f",&max);
	printf("Enter marks of each subject");
	for(i=0;i<n;i++)
	scanf("%f",&a[i]);
	for(i=0;i<n;i++)
	sum=sum+a[i];
	percentage=(sum/max)*100;
	printf("The percentage is:%f",percentage);
	return 0;
}
