#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter 3 sides of triangle");
	scanf("%f%f%f",&a,&b,&c);
	if((a==b)&&(b==c)&&(c==a))
	{
		printf("triangle is equilateral");
	}
	else
	{
		if((a==b)||(b==c)||(c==a))
		printf("The triangle is isosceles");
		else
		printf("triangle is scalene");
	}
}

