#include<math.h>
#include<stdio.h>
int main()
{
	float P,r,n,t,CI;
	printf("enter P,r,n,t");
	scanf("%f%f%f%f",&P,&r,&n,&t);
	CI=P*pow((1+(r/n)),n*t);
	printf("The compund interest is:%f",CI);
	return 0;
}
