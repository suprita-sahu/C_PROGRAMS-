#include<stdio.h>
int main()
{
	int i,j,r1,c1,r2,c2;
	printf("enter row and column of first matrix\n");
	scanf("%d%d",&r1,&c1);
	printf("Enter row and column of second matrix\n");
	scanf("%d%d",&r2,&c2);
	if(r1==r2&&c1==c2)
	{
	int a[r1][c1];
	int b[r2][c2];
	int sum[r1][c1];
	printf("Enter elements of first matrix\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		scanf("%d",&a[i][j]);
	}
	printf("Enter elements of second matrix\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		scanf("%d",&b[i][j]);
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		sum[i][j]=a[i][j]+b[i][j];	
	}
	printf("The sum is:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		printf(" %d ",sum[i][j]);
		printf("\n");
	}
}
	return 0;
}
