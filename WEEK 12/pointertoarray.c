#include<stdio.h>
int main()
{
   int n,i;
   printf("Enter size of array:\n");
   scanf("%d",&n);
   int a[n];
   int *p=a;
   printf("Enter elemnts in array:\n");
   for(i=0;i<n;i++)
   scanf("%d",p+i);
   printf("The elements are:\n");
   for(i=0;i<n;i++)
   printf("%d",*(p+i));
   return 0;
}
