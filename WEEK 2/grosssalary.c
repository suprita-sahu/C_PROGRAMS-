#include<stdio.h>
int main()
{
	float gs,bp,ta,da;
	printf("enter base salary of employee:");
	scanf("%f",&bp);
	ta=0.1*bp;
	da=0.15*bp;
	gs=bp+ta+da;
	printf("The gross salary is:%f",gs);
}
