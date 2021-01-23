/*****************************************
Online Exam 2 - Version A - Question 2
*****************************************/

#include <stdio.h>

float calcIncrement(float salary , int noofYearsWorked);
float calcTotSalary(float salary , float increment);

int main()
{
	float salary;
	int years;
	
	printf("Enter Salary : ");
	scanf("%f", &salary);
	printf("Enter no of years woorked : ");
	scanf("%d", &years );
	printf("Increment : %f\n", calcIncrement( salary , years ));
	printf("Total Salary : %f\n", calcTotSalary ( salary , calcIncrement ( salary , years )));
	

	return 0;
}
float calcIncrement(float salary , int noofYearsWorked) // calculate salary increment
{
	float increment;
	if( noofYearsWorked > 2)
       increment = salary * 0.1;
	
	return increment;
}
float calcTotSalary(float salary , float increment) // calculate total salary
{
	return salary + increment;
}