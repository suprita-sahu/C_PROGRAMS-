#include<stdio.h>
void add(int[3][3],int[3][3],int,int);
void multiply(int[3][3],int[3][3],int,int,int,int);
void print(int[3][3],int,int);
void scan(int[3][3],int[3][3],int,int);
int main()
{
	int R,C,i,j,R1,C1;
	char ch;
	printf("Enter row and column of matrix1:\n");
	scanf("%d%d",&R,&C);
	printf("Enter row and column of second matrix:\n");
	scanf("%d%d",&R1,&C1);
	int a[R][C];
	int b[R1][C1];
	printf("ADD+ OR MULTIPLY*\n");
	scanf(" %s ",&ch);
	printf("Enter elemnts for 1st matrix:\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		scanf("%d",&a[i][j]);
	}
	printf("Enter elemnts for 2nd matrix:\n");
	for(i=0;i<R1;i++)
	{
		for(j=0;j<C1;j++)
		scanf("%d",&b[i][j]);
}
	switch(ch)
	{
		case '+':add(a,b,R,C);
		break;
		case '*':multiply(a,b,R,C,R1,C1);
		break;
		default:printf("Enter valid option:\n");
	}
	return 0;
}
void print(int z[3][3],int x,int y)
{
	int i,j;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		printf("%d",z[i][j]);
		printf("\n");
	}
}
void add(int z[3][3],int z1[3][3],int x,int y)
{
	int i,j;
	int sum[x][y];
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
	     sum[i][j]=z[i][j]+z1[i][j];	
	}
	print(sum,x,y);
}
void multiply(int z[3][3],int z1[3][3],int x,int y,int x1,int y1)
{
	int i,j,k;
	int c[x][y1];
	for(i=0;i<x;i++)
	{
		for(j=0;j<y1;j++)
		{
			c[i][j]=0;
			for(k=0;k<y;k++)
			c[i][j]=c[i][j]+z[i][k]*z1[k][j];
		}	
	}
	print(c,x,y1);	
}	
