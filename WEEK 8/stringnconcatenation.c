#include<stdio.h>
#include<string.h>
int main()
{
	char st[30],st1[30];
	int n;
	printf("Enter string:\n");
	gets(st);
	printf("Enter string to be concatenated:\n");
	gets(st1);
	printf("Enter upto which index you want to concatenate:\n");
	scanf("%d",&n);
	strncat(st,st1,n);
	printf("The concatenated string is:%s",st);
	return 0;
} 
