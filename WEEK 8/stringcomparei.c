#include<stdio.h>
#include<string.h>
int main()
{
	char st[30],st1[30];
	int x;
	printf("Enter string:\n");
	gets(st);
	printf("Enter string to be compared:\n");
	gets(st1);
	x=strcmpi(st,st1);
	printf("%d",x);
	return 0;
}
	
