#include<stdio.h>
int main()
{
	int a,c,b;
	printf("enter two numbers:\n");
	scanf("%d%d",&a,&b);
	int *pa=&a;
	int *pb=&b;
	int *pc=&c;
	*pc=*pa+*pb;
	printf("Sum is %d",*pc);
	return 0;
}
