/**************************
Online exam - 1 Version D
***************************/

#include <stdio.h>

int main()
{
	int Airline , ChargePerSeat , NoOfSeats, ExtraServiceOption , TotalExtraCharges = 0 , ExtraCharges ,  TotalPrice ;
	char ClassType , ExtraServiceChoice;
	
	printf("Input Airline option (1,2,3,4) : ");
	scanf("%d", &Airline);
	
	while( !(Airline == 1 || Airline == 2 || Airline == 3 || Airline == 4) ){
		
		printf("Invalid Airline option\n");
		
		printf("Input Airline option (1,2,3,4) : ");
		scanf("%d", &Airline);
		
	}
	
	printf("Class type (E/B) : ");  // E - Economy , B - Business
	scanf(" %c",&ClassType);
	
	while( !(ClassType == 'e'|| ClassType == 'E' || ClassType == 'b' || ClassType == 'B') ){
		
		printf("Invalid Class type\n");
		
		printf("Class type (E/B) : ");
		scanf(" %c",&ClassType);
	
	}
	
	//Srilankan
	if(Airline == 1){
		
		if(ClassType == 'e' || ClassType == 'E')
			ChargePerSeat = 36500;
		
		else if(ClassType == 'b' || ClassType == 'B')
			ChargePerSeat = 77600;
	}
	
	//Emirates
	if(Airline == 2){
		
		if(ClassType == 'e' || ClassType == 'E')
			ChargePerSeat = 35800;
		
		else if(ClassType == 'b' || ClassType == 'B')
			ChargePerSeat = 76500;
		
	}
	
	//Thai Airways
	if(Airline ==3){
		
		if(ClassType == 'e' || ClassType == 'E')
			ChargePerSeat = 54600;
		
		else if(ClassType == 'b' || ClassType == 'B')
			ChargePerSeat = 84700;
		
	}
	
	//Air Asia
	if(Airline == 4){
		
		if(ClassType == 'e' || ClassType == 'E')
			ChargePerSeat = 28500;
		
		else if(ClassType == 'b' || ClassType == 'B')
			ChargePerSeat = 42800;
		
	}
	
	printf("Number of seats : ");
	scanf("%d", &NoOfSeats);
	
	printf("Do you need any extra services (y/n) : ");
	scanf(" %c", &ExtraServiceChoice);
	
	while( !(ExtraServiceChoice == 'y' || ExtraServiceChoice == 'Y' || ExtraServiceChoice == 'n' || ExtraServiceChoice == 'N') ){
		
		printf("Invalid Extra services choice\n");
		
		printf("Do you need any extra services (y/n) : ");
		scanf(" %c", &ExtraServiceChoice);
		
	}
	
	while(ExtraServiceChoice == 'y' || ExtraServiceChoice == 'Y'){
		
		printf("Input your option (1,2,3,4) : ");
		scanf("%d", &ExtraServiceOption);
		
		while( !(ExtraServiceOption == 1 || ExtraServiceOption == 2 || ExtraServiceOption == 3  || ExtraServiceOption == 4) ){
			
			printf("Invalid Extra service option\n");
			
			printf("Input your option (1,2,3,4) : ");
			scanf("%d", &ExtraServiceOption);
			
		}
		
		//Extra 10kg luggage
		if(ExtraServiceOption == 1)
			ExtraCharges = 7800;
		
		//Extra meal
		if(ExtraServiceOption == 2)
			ExtraCharges = 1500;
		
		//Room at the hotel
		if(ExtraServiceOption == 3)
			ExtraCharges = 19500;
		
		//Taxi services
		if(ExtraServiceOption ==4)
			ExtraCharges = 2000;
		
		TotalExtraCharges += ExtraCharges;
		
		printf("Do you need any extra services (y/n) : ");
		scanf(" %c", &ExtraServiceChoice);
		
		while( !(ExtraServiceChoice == 'y' || ExtraServiceChoice == 'Y' || ExtraServiceChoice == 'n' || ExtraServiceChoice == 'N') ){
		
			printf("Invalid Extra services choice\n");
			
			printf("Do you need any extra services (y/n) : ");
			scanf(" %c", &ExtraServiceChoice);
			
		}
		
	}
	
	TotalPrice = ( ChargePerSeat + TotalExtraCharges ) * NoOfSeats;
	
	printf("Total Price : %.2f\n", (float)TotalPrice);
	
	
	return 0;
}