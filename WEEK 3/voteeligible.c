#include<stdio.h>
int main()
{
	int age;
	printf("Enter age");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("eligible to vote");
	}
	else
	printf("Not eligible");
}
