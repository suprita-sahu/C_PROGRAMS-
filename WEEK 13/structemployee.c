#include<stdio.h>
struct employee
{
	char name[40];
	int ID;
	int salary;
};
int main()
{
	struct employee s;
	printf("Enter name:\n");
	gets(s.name);
	printf("Enter ID\n");
	scanf("%d",&s.ID);
	printf("Enter salary:\n");
	scanf("%d",&s.salary);
	printf("The details are:\n");
	printf("Name: ");
	puts(s.name);
	printf("ID: %d\n",s.ID);
	printf("salary: %d\n",s.salary);
	return 0;
}
