/*****************************************
Online exam 2 - Version C - Question 2
******************************************/

#include <stdio.h>

float calculateWeeklySalary(int grade , float hrsWorked);
void printDetails(int grade , float hrsWorked , float salary);

int main()
{
	int empgrade;
	float hoursworked , WeeklySalary;
	
	printf("Enter Employee Grade : ");
	scanf("%d",&empgrade);
	printf("Enter no of hours worked : ");
	scanf("%f",&hoursworked);
	
	WeeklySalary = calculateWeeklySalary(empgrade , hoursworked); 
	printDetails(empgrade , hoursworked , WeeklySalary);

	return 0;
}

float calculateWeeklySalary(int grade , float hrsWorked)  // Calculate weekly salary
{
	int hourlyrate;
	float WeeklySalary;
	
	if(grade == 1)
		hourlyrate = 100;
	
	else if(grade == 2)
		hourlyrate = 200;
	
	else if(grade == 3)
		hourlyrate = 300;
	else
		printf("Invalid employee rate");
	
	WeeklySalary = hrsWorked * hourlyrate;
	
	return WeeklySalary;
	
}

void printDetails(int grade , float hrsWorked , float salary) 
{
	printf("Grade : %d \nHours Worked : %.2f \nWeekly Salary : %.2f ", grade , hrsWorked , salary );
}