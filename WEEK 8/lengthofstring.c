#include<stdio.h>
#include<string.h>
int main()
{
	char st[30];
	int length;
	printf("Enter string:\n");
	gets(st);
	length=strlen(st);
	printf("Length of string=%d",length);
	return 0;
}
