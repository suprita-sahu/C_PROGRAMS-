#include<stdio.h>
int main()
{
	int i,j,x,flag=0;
	char st1[40];
	char st2[30];
	printf("Enter 1st string:\n");
	gets(st1);
	printf("Enter 2nd string:\n");
	gets(st2);
	for(i=0;st1[i]!='\0';i++)
	{
		 for(j=0;st2[j]!='\0';j++)
		    {
		    	if(st1[i]==st2[j])
		    	{
		    		x=i;
		    	}
			}
	}
	printf("%d",x);
		   
	return 0;
	}
