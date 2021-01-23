/*****************************
Online exam 3 - Version E
******************************/

#include <stdio.h>
#define SIZE 6

int main()
{
	int num[SIZE];
	int i , j , ascending;
	
	printf("Enter values to the array : \n");
	
	for(i=0; i < SIZE; i++){
		scanf("%d",&num[i]);
		
		if(i == 5){
			
			//find the numbers order is ascending or not
			for(j=0; j < 5; j++){
			
				if(num[j] <= num[j+1]){
					ascending = 1;
				}
				else{
					ascending = 0;
					break;
				}
				
			}			
		}
		if(i == 5 ){
			if(ascending == 1){
				printf("\nNumbers are stored in ascending oder");
			}
			else if(ascending == 0){
				printf("\nNumbers are not stored in ascending oder\n\n");
				printf("Enter values to the array : \n");
				i = 0;
				
				continue;
			}
		}	
	}
	
	return 0;
}