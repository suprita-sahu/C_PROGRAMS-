#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char st[20];
	printf("Enter string\n");
	gets(st);
	for(i=0;st[i]!='\0';i++)
	{
		if(st[i]>='A'&&st[i]<='Z')
		st[i]=st[i]+32;
	}
	puts(st);
	return 0;
}
