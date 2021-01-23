
/******************************************
Online exam 2 - Version D - Question 2
*******************************************/

# include <stdio.h>

float calculateTotalCost(int itemNo , int quantity);
void printDetails(int itemNo , int quantity , float totalCost);

int main()
{
	int itemNo , quantity;
	
	printf("Input item number : ");
	scanf("%d", &itemNo);
	
	printf("quantity : ");
	scanf("%d", &quantity);
	
	printDetails(itemNo , quantity , calculateTotalCost(itemNo , quantity) );
	
	
	
	return 0;
}

// Calculate total cost
float calculateTotalCost(int itemNo , int quantity)
{
	float totalCost;
	int unitprice;
	
	if(itemNo == 1)
		unitprice = 100;
	
	else if(itemNo == 2)
		unitprice = 200;
	
	else if(itemNo == 3)
		unitprice = 300;
		
	totalCost = unitprice * quantity; 
	
	return totalCost;
}

void printDetails(int itemNo , int quantity , float totalCost)
{
	printf("Item no : %d\nQuantity : %d\ntotalCost : %.2f\n", itemNo , quantity ,totalCost);
}