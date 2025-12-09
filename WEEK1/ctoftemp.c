#include<stdio.h>
int main()
{
	float temp,c;
	printf("Enter temerature in celsius");
	scanf("%f",&c);
	temp=(9/5)*c+32;
	printf("The temperature in fahrenheit is:%f",temp);
	return 0;
}
