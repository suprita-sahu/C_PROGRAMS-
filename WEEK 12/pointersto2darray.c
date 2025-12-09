#include<stdio.h>
int main()
{
	int r,c,i,j;
	printf("Ente row and column size:\n");
	scanf("%d%d",&r,&c);
	int a[r][c];
	int *p[r];
	for(i=0;i<r;i++)
	p[i]=&a[i][0];
	printf("enter elemnts:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",(*(p+i)+j));
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf(" %d ",*(*(p+i)+j));
		printf("\n");
	}
	return 0;
}
