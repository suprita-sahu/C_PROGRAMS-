#include<stdio.h>
int main()
{
	float P,T,R,I;
	printf("Enter principle,time,rate of interest:");
	scanf("%f%f%f",&P,&T,&R);
	I=(P*T*R)/100;
	printf("The simple interest is:%f",I);
	return 0;
}
