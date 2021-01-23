/*****************************************
Online exam 2 - Version E - Question 1
******************************************/

#include <stdio.h>

int main()
{
	float marks;
	
	printf("Enter marks : ");
	scanf("%f",&marks);
	
	float max = marks , min = marks;
	

	while(marks != -99){
		if(marks >= 0 && marks <= 100){
				
					
					if(marks > max)
						max = marks;
					if(marks < min)
						min = marks;
					
				
		}
		else
		{printf("Invalid marks. please enter again\n");}
			
			printf("Enter marks : ");
			scanf("%f",&marks);
	}
	
	printf("minimum marks : %f \nmaximum marks : %f\n", min , max);
	

	return 0;
}