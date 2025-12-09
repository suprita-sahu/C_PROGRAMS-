#include<stdio.h>
int main()
{
	int i,j,r,c;
	printf("Enter row and column\n");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("enter values in matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("The transposed matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d ",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
