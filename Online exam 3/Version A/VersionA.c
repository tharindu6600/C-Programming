/****************************
Online exam 3 - Version A 
*****************************/

#include <stdio.h>

int main()
{
	int numArr[6] , evenArr[6] , oddArr[6];
	int even = 0 , odd = 0 , i;
	
	for(i = 0; i < 6; i++ ){
		printf("Enter number : ");
		scanf("%d",&numArr[i]);
	}
	
	// finding the  number is even or odd number
	for(i = 0; i < 6; i++){
		
		if(numArr[i] % 2 == 0){
			evenArr[even] = numArr[i];
			even++;
		}
		else{
			oddArr[odd] = numArr[i];
			odd++;
		}
	}
	printf("Number series : ");
	
	for(i = 0; i < 6; i++ )
		printf("%d ",numArr[i]);
	
	printf("\nOdd numbers : ");
	
	for(i = 0; i < odd ; i++ )
		printf("%d ",oddArr[i]);
	
	printf("\nEven numbers : ");
	
	for(i = 0; i < even ; i++ )
		printf("%d ", evenArr[i]);
	
	printf("\n");
	
	
	return 0;
}