#include<stdio.h>
#include<string.h>
int main()
{
	char st[30],st1[30];
	int n;
	printf("Enter string:\n");
	gets(st);
	printf("Enter string to be copied:\n");
	gets(st1);
	printf("Enter upto which index to copy:\n");
	scanf("%d",&n);
	printf("The copied string is:%s",strncpy(st,st1,n));
	return 0;
}
	
