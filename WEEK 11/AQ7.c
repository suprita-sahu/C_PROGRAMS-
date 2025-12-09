#include<stdio.h>
int main()
{
	int i,j,k,l,min,max,r,c;
	printf("Enter row and columns:\n");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("Enter elemnts:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
	     scanf("%d",&a[i][j]);
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			min=a[0][0];
			for(k=0;k<c;k++)
			{
				if(a[i][k]<min)
				min=a[i][k];
			}
		   max=a[0][0];
		   for(l=0;l<r;l++)
		   {
		   	if(a[l][j]>max)
		   	max=a[l][j];
		   }
		   if(min==max)
		   printf("saddle point=%d",min);
		}
	}
	return 0;
}
	
	
