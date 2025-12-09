#include<stdio.h>
int main()
{
	int i,j,R,C;
	int a[20][20];
	int b[20];
	printf("Enter rows:\n");
	scanf("%d",&R);
	printf("Enter column:\n");
	scanf("%d",&C);
	printf("Enter elemnts:\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
	  scanf("%d",&a[i][j]);
}
for(i=0;i<C;i++)
{
	for(j=R-1;j>=0;j--)
	printf("%d",a[j][i]);
	printf("\n");
}
return 0;
}
