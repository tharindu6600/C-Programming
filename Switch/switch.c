/*****************
Switch statement
******************/

#include <stdio.h>

int main()
{
	
	int score; 
	
	printf("Enter score (1,2,3,4) : ");
	scanf("%d", &score);  // read score
	
	switch(score)
	{
		case 4 :
		case 3 : 
			printf("gold winner\n");
					break;  // if we forget to put break it will print all cases
					
		case 2 : printf("silver winner\n");
				break;

		case 1 : printf("bronze winner\n");
				break;
	
		default : printf("Invalid score\n");	 // "default" work like as else part in if else statement	
	
	}
	return 0;
	
}