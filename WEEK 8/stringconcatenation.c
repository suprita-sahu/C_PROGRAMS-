#include<stdio.h>
#include<string.h>
int main()
{
	char st[30],st1[30];
	printf("Enter a string:\n");
	gets(st);
	printf("Enter string to be concatenated\n");
	gets(st1);
	printf("the concatenated string is:%s",strcat(st,st1));
	return 0;
}
