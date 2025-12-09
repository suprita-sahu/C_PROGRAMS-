#include<stdio.h>
int main()
{
	int i,j;
	char st[40],subst[30];
	printf("enter string:\n");
	gets(st);
	printf("enter substring:\n");
	gets(subst);
	for(i=0;st[i]!='\0';i++)
	{
		for(j=0;subst[j]!='\0';j++)
		{
			if(st[i+j]!=subst[j])
			break;
		}
		if(subst[j]=='\0')
		{
			printf("%d",i);
			break;
		}
		
	}
	return 0;
	
}
