#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 3 values");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a>c))
	printf("a is greatest");
	else
	{
	if((b>a)&&(b>c))
	printf("B is greatest");
	else
	printf("c is greatest");
    }
	return 0; 
}
	
