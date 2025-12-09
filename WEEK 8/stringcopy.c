#include<stdio.h>
#include<string.h>
int main()
{
	char st[30],st1[30];
	printf("Enter string:\n");
	gets(st);
	printf("Enter string to be copied:\n");
	gets(st1);
	printf("The initial string is:%s\n",st);
	printf("The copied string is:%s",strcpy(st,st1));
	return 0;
}
