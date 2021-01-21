/****************************
Online exam 1 - Version A
*****************************/

#include <stdio.h>

int main()
{
	int RoomType , NoOfDays;
	char AccommodationType , CardType;
	float HotelRatesPerDay , Discount , DiscountAmount , TotalAmount;
	
	printf("Enter type of room (1,2,3) : ");
	scanf("%d", &RoomType);
	
	while(RoomType != -1){  // Enter -1 to to stop the loop
		
		while( !(RoomType== 1 || RoomType == 2 || RoomType == 3)){
			
			printf("Invalid type of room\n");
			
			printf("Enter type of room (1,2,3) : ");
			scanf("%d", &RoomType);
		}
		
		printf("Enter Accomadation Basis (F/H :)");  // F - Full Board , H - Half Board
		scanf(" %c", &AccommodationType);
		
		printf("Enter No of days : ");
		scanf("%d", &NoOfDays);
		
		printf("Enter Reward Card Type (G,S,B) : ")
		scanf(" %c", &CardType);
		
		//HotelRatesPerDay
		if(RoomType == 1){
			if(AccommodationType == 'f' || AccommodationType == 'F')
				HotelRatesPerDay = 25555;
			
			else if(AccommodationType == 'h' || AccommodationType == 'H')
				HotelRatesPerDay = 17250;		
		}
		else if(RoomType == 2){
			if(AccommodationType == 'f' || AccommodationType == 'F')
				HotelRatesPerDay = 17500;
			
			else if(AccommodationType == 'h' || AccommodationType == 'H')
				HotelRatesPerDay = 12250;
		}
		else if(RoomType == 3){
			if(AccommodationType == 'f' || AccommodationType == 'F')
				HotelRatesPerDay = 9000;
			
			else if(AccommodationType == 'h' || AccommodationType == 'H')
				HotelRatesPerDay = 7250;
		}
		
		//Discount
		if(CardType == 'g' || CardType == 'G')
			Discount = 0.125;
		
		else if(CardType == 's' || CardType == 'S')
			Discount == 0.115;
		
		else if(CardType == 'b' || CardType == 'B')
			Discount == 0.095;
		
		
		DiscountAmount = (HotelRatesPerDay * NoOfDays) * Discount;
		
		TotalAmount = (HotelRatesPerDay * NoOfDays) - DiscountAmount;
		
		printf("Amount(Rs.) : %.2f\n\n", TotalAmount);
		
		printf("Enter type of room : ");
		scanf("%d", &RoomType);
	
	}
		
	return 0;
}