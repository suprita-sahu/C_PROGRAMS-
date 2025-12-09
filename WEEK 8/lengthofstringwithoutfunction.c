#include<stdio.h>
int main()
{
	int i,length=0;
	char st[30];
	printf("Enter a string\n");
	gets(st);
	for(i=0;st[i]!='\0';i++)
	{
		length++;
	}
	printf("The length of the string is:%d",length);
	return 0;
}
