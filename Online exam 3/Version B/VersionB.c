/*****************************
Online exam 3 - Version B
******************************/

#include <stdio.h>

int main()
{
	int i, positive = 0 , negative = 0 ;
	int intArr[10] , positiveNum[10] , negativeNum[10]; 
	
	for(i=0 ; i < 10; i++){
		printf("Enter Number %d : ",i+1);
		scanf("%d",&intArr[i]);
		
	}
	
	//finding the number is positive or negative number
	for(i=0 ; i < 10; i++){
		
		if(intArr[i] >= 0){
			positiveNum[positive] = intArr[i];
			positive++;
		}
		else{
			negativeNum[negative] = intArr[i];
			negative++;
		}
	}
	
	printf("\nNumber series : ");
	
	for(i=0 ; i < 10; i++){
		printf("%d ", intArr[i]);	
	}
	
	printf("\n");
	
	printf("Positive numbers : ");
	
	for(i=0 ; i < positive; i++){
		printf("%d ", positiveNum[i]);	
	}
	
	printf("\n");
	
	printf("Negative numbers : ");\
	
	for(i=0 ; i < negative; i++){
		printf("%d ", negativeNum[i]);
	}
	
	return 0;
}