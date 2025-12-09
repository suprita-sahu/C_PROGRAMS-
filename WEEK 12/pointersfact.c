#include<stdio.h>
int main()
{
	int a,c,i;
	printf("enter two numbers:\n");
	scanf("%d",&a);
	int *pa=&a;
	int *pc=&c;
	for(i=1;i<a;i++)
	{
		*pc=(*a)*i;
	}
	printf("%d",*pc);
	return 0;
}
