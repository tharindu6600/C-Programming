/*****************************
Online exam 3 - Version D
******************************/

#include <stdio.h>
#define SIZE 8

int main()
{
	int num[SIZE];
	int i , count = 0;
	
	
	for(i=0; i < SIZE; i++){
		printf("Enter numbers(1-4) : ");
		scanf("%d",&num[i]);
		
		if(num[i] < 1 || num[i] > 4){
			i--;
			printf("Invalid number. enter again\n");
			continue;
		}
	}
	
	printf("num array : ");
	
	for(i=0; i < SIZE; i++){
		printf("%d ", num[i]);
	}
	
	//finding the how many times 1 3 pattern appears
	for(i=0; i < SIZE; i++){
		if(num[i] == 1 && num[i+1] == 3)
			count++;
			
	}
	
	printf("\nNumber of times the pattern 1 3 appear : %d", count);
	
	
	return 0;
}