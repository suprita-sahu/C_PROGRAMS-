#include<stdio.h>
int main()
{
	int R,C,i,j;
	printf("ENter rows and column of matrix:\n");
	scanf("%d%d",&R,&C);
	int a[R][C];
	printf("Enter elemnts:\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<R;i++)
	{
		for(j=C-1;j>=0;j--)
		printf("%d",a[i][j]);
		printf("\n");
	}
	return 0;
}
