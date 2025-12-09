#include<stdio.h>
void swap(int* l,int *m)
{
	int temp=*l;
	*l=*m;
	*m=temp;
}
void selectionsort(int* x,int n )
{
	int i,j,min;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i;j<n;j++)
		{
			if(*(x+j)<*(x+min))
			min=j;
		}
		if(i!=min)
		swap((x+i),(x+min));
	}
}
int main()
{
   int n,i,j,min;
   printf("Enter size of array:\n");
   scanf("%d",&n);
   int a[n];
   int *p=a;
   printf("Enter elemnts in array:\n");
   for(i=0;i<n;i++)
   scanf("%d",p+i);
   selectionsort(p,n);
   for(i=0;i<n;i++)
   printf("%d ",a[i]);
   return 0;
}
