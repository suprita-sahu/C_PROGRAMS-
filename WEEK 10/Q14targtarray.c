#include<stdio.h>
int main()
{
 int i,n,target;
 printf("Enter size of array:\n");
 scanf("%d",&n);
 int a[n];
 printf("Enter array elements:\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("Enter target:\n");
 scanf("%d",&target);
for(i=0;i<n;i++)
{
	if(a[i]+a[i+1]+a[i+2]==target)
	printf("FOUND(%d %d %d) ",a[i],a[i+1],a[i+2]);
}
return 0;
}
