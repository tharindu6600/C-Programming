/*****************************
Online exam 3 - Version C
******************************/

#include <stdio.h>
# define SIZE 10

int main()
{
	int myArray[SIZE] , largeNum[SIZE];
	int i , sum = 0 , large = 0;
	float avg;
	
	for(i=0; i < SIZE; i++){
		printf("Enter the number series : ");
		scanf("%d",&myArray[i]);
		sum += myArray[i];
	}
	
	avg = sum / SIZE;
	
	for(i=0; i < SIZE; i++){
		if(myArray[i] > avg){
			largeNum[large] = myArray[i];
			large++;
		}
	}
	
	printf("Average : %.2f\n", avg);
	
	printf("myArray : ");

	for(i=0; i < SIZE; i++){
		printf("%d ",myArray[i]);
	}
	
	printf("\nLargeNum : ");
	
	for(i=0; i < large; i++)
		printf("%d ",largeNum[i]);
	
	
	return 0;
}