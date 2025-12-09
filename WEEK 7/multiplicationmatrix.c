#include<stdio.h>
int main()
{
	int i,j,k,r1,c1,r2,c2;
	printf("enter row and column of first matrix\n");
	scanf("%d%d",&r1,&c1);
	printf("Enter row and column of second matrix\n");
	scanf("%d%d",&r2,&c2);
	int a[r1][c1],b[r2][c2];
	int c[r1][c2];
	printf("Enter values of matrix 1\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		scanf("%d",&a[i][j]);
	}
	printf("Enter values of matrix 2\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		scanf("%d",&b[i][j]);
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
		c[r1][c2];
		for(k=0;k<r1;k++)
		c[i][j]=c[i][j]+a[i][k]*b[k][i];
		printf("\n");
	    }
    }
    for(i=0;i<r1;i++)
    {
    	for(j=0;j<c2;j++)
    	printf(" %d ",c[i][j]);
	}
	return 0;
}
