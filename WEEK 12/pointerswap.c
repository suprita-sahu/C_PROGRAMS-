#include<stdio.h>
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	int a,b;
	printf("Enter two numbs:\n");
	scanf("%d%d",&a,&b);
	int *pa=&a;
	int *pb=&b;
	printf("values before swap a=%d b=%d",a,b);
	swap(&a,&b);
	printf("values after swap a=%d b=%d",a,b);
	return 0;
}
