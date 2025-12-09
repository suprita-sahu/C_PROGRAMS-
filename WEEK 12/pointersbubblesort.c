#include<stdio.h>
int main()
{
   int n,i,j,temp;
   printf("Enter size of array:\n");
   scanf("%d",&n);
   int a[n];
   int *p=a;
   printf("Enter elemnts in array:\n");
   for(i=0;i<n;i++)
   scanf("%d",p+i);
   for(i=0;i<n-1;i++)
   {
   	for(j=i;j<n-i-1;j++)
   	{
   		if(*(p+j)>*(p+j+1))
   		{
   		 temp=*(p+j);
   		 *(p+j)=*(p+j+1);
   		 *(p+j+1)=temp;
		   }
	   }
   }
   printf("The elemnts are:\n");
   for(i=0;i<n;i++)
   printf("%d ",*(p+i));
   return 0;
}
