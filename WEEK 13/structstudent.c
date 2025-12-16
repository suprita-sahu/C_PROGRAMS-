#include<stdio.h>
struct student
{
	char name[40];
	int rollno;
	int marks[6];
	struct add
	{
		int Hno;
		char city[30];
		int pin;
	}a;
};
int main()
{
	int i;
	struct student s;
	printf("enter name:\n");
	gets(s.name);
	printf("enter roll number:\n");
	scanf("%d",&s.rollno);
	printf("Enter marks of 6 subjects:\n");
	for(i=0;i<6;i++)
	scanf("%d",&s.marks[i]);
	printf("Enter H.no , city,pin\n");
	scanf("%d %s %d",&s.a.Hno,&s.a.city,&s.a.pin);
	printf("*****The details are*********\n");
	printf("Name:\n");
	puts(s.name);
	printf("Roll number:%d \n",s.rollno);
	printf("MARKS:\n");
	for(i=0;i<6;i++)
	printf("%d\n",s.marks[i]);
	printf("Address:\n");
	printf("House number:%d\n",s.a.Hno);
	printf("City: ");
	puts(s.a.city);
	printf("Pin:%d\n",s.a.pin);
	return 0;
}
