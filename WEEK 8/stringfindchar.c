#include<stdio.h>
#include<string.h>
int main()
{
	char st[30],*ptr;
	char ch;
	printf("Enter string:\n");
	gets(st);
	printf("Enter character to be found:\n");
	scanf("%c",&ch);
	ptr=strchr(st,ch);
	printf("%s",ptr);
	return 0;
}
	
	
	
