/**************************************
Online exam 2  - Version 2 - Question 1
***************************************/

# include <stdio.h>

int main()
{
	for(int i=2; i >= 1; i--)
	{
		for(int j=2; j >= 1; j--)
		{
			for(int k=2; k >= 1; k--)
				printf("[%d %d %d] \n", i , j, k );
				
		}
	}
	
	
	return 0;
}