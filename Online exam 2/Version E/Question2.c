/*****************************************
Online exam 2 - Version E - Question 2
******************************************/

#include <stdio.h>

float findRadianValue(float angelInDegrees);
void printRadianValues(float angelInDegrees);

int main()
{
	float angelInDegrees;
	
	printf("Enter radian : ");
	scanf("%f",&angelInDegrees);
	
	printf("degree\t\t\tradian\n");
	printRadianValues(angelInDegrees);
	
	return 0;
}

float findRadianValue(float angelInDegrees) // find radian
{
	float radian , pi = 22/7;
	radian = pi / 180 * angelInDegrees;
	
	return radian;
}

void printRadianValues(float angelInDegrees)
{
	printf("%f\t\t%f", angelInDegrees , findRadianValue(angelInDegrees));
}