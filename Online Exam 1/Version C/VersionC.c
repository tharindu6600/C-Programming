/**************************
Online exam 1 - Version C
***************************/

#include <stdio.h>

int main()
{
	int PizzaType , PizzaPrice , ToppingOption , ChargePerTopping , TotalToppingPrize , TotalPrice; 
	char PizzaSize , ToppingChoice;
	
	printf("Input pizza option (1,2,3): "); // 1 - Italiano , 2 - Cheesy Onion , 3 - Hot garlic Prawn
	scanf("%d", &PizzaType);
	
	while(!(PizzaType == 1 || PizzaType == 2 || PizzaType == 3))
	{
		printf("Invalid pizza type\n");
		
		printf("Input pizza option (1,2,3): ");
		scanf("%d", &PizzaType);	
	}
	
	printf("Size of the Pizza(P/M/L) : ");  // P - personal , M - medium  , L - large
	scanf(" %c", &PizzaSize);
	
	while(!(PizzaSize == 'p' || PizzaSize == 'P' || PizzaSize == 'm' || PizzaSize == 'M' || PizzaSize == 'l' || PizzaSize == 'L')){
		
		printf("Invalid pizza size\n");
		
		printf("Size of the Pizza(P/M/L) : ");  
		scanf(" %c", &PizzaSize);	
	}
	
	//Italiano
	if(PizzaType == 1){
		
		if(PizzaSize == 'p' || PizzaSize == 'P')
			PizzaPrice = 560;
		
		else if(PizzaSize == 'm' || PizzaSize == 'M')
			PizzaPrice = 920;
		
		else if(PizzaSize == 'l' || PizzaSize == 'L')
			PizzaPrice == 1800;
			
	}
	
	//Cheesy Onion
	if(PizzaType == 2){
		
		if(PizzaSize == 'p' || PizzaSize == 'P')
			PizzaPrice = 340;
		
		else if(PizzaSize == 'm' || PizzaSize == 'M')
			PizzaPrice = 660;
		
		else if(PizzaSize == 'l' || PizzaSize == 'L')
			PizzaPrice = 1300;
		
	}
	//Hot garlic Prawn
	if(PizzaType == 3){
		
		if(PizzaSize == 'p' || PizzaSize == 'P')
			PizzaPrice = 760;
		
		else if(PizzaSize == 'm' || PizzaSize == 'M')
			PizzaPrice = 1100;
		
		else if(PizzaSize == 'l' || PizzaSize == 'L')
			PizzaPrice = 2100;
		
	}
	
	//Need extra toppings or not
	printf("Do you need any extre toppings (y/n) : ");
	scanf(" %c", &ToppingChoice);
	
	while(ToppingChoice == 'y' || ToppingChoice == 'Y'){
		
		printf("Input your option (1,2,3,4) : ");
		scanf("%d", &ToppingOption);
		
		//Cheese
		if(ToppingOption == 1)
			ChargePerTopping = 320;
		
		//Olives
		else if(ToppingOption == 2)
			ChargePerTopping = 140;
		
		//Bell Peper
		else if(ToppingOption == 3)
			ChargePerTopping = 130;
		
		//Pineapple
		else if(ToppingOption == 4)
			ChargePerTopping = 150;
		
		TotalToppingPrize += ChargePerTopping;
	
		//Need extra toppings or not
		printf("Do you need any extre toppings (y/n) : ");
		scanf(" %c", &ToppingChoice);
	}
	
	TotalPrice = PizzaPrice + TotalToppingPrize;
	
	printf("Total price(Rs) : %d\n",TotalPrice);
	
	
	
	return 0;
} 