#include<stdio.h>
#include<string.h>
int main()
{
	char st1[30],st2[30];
	printf("ENter string:\n");
	gets(st1);
	printf("The reverse string is:%s",strrev(st1));
	return 0;
}
