/****************************
online exam1 - version B
****************************/

#include <stdio.h>

int main()
{
	int roomtype , guest , AddTourNO; 
	float  chargeperguest , addtourcharge , TotalAddTourCharge = 0 , TotalPrice;
	char tourchoice ;
	
	printf("Input room option (1,2,3) : ");
	scanf("%d", &roomtype);
	
	printf("Number of guests : ");
	scanf("%d", &guest);
	
	
	//Suit
	if(roomtype == 1 ){
		
		if(guest <= 2)
			chargeperguest = 45000;
		else if(guest <= 5)
			chargeperguest = 44000;
		else
			chargeperguest = 43000;	
		
	}
	
	//Superior
	else if(roomtype == 2){
		if(guest <= 2)
			chargeperguest = 40000;
		else if(guest <= 5)
			chargeperguest = 38000;
		else
			chargeperguest = 35000;
	}
	
	//Deluxe
	else if(roomtype == 3){
		
		if(guest <= 2)
			chargeperguest = 37500;
		else if(guest <= 5)
			chargeperguest = 35000;
		else
			chargeperguest = 32000;	
		
	}
	
	printf("Do you need any additional tours (y/n) : ");
	scanf(" %c", &tourchoice);
	
	while(tourchoice == 'y' || tourchoice == 'Y'){
		
		printf("Input your option (1,2,3,4) : ");
		scanf("%d", &AddTourNO);
		
		//Safari
		if(AddTourNO == 1)
			addtourcharge = 3500;
		
		//Bird Watching
		else if(AddTourNO == 2 )
			addtourcharge = 1000;
		
		//Boat Ride
		else if(AddTourNO == 3)
			addtourcharge =1500;
		
		//City Tour
		else if(AddTourNO == 4)
			addtourcharge = 2000;
		
		TotalAddTourCharge += addtourcharge;
		
		printf("Do you need any additional tours (y/n) : ");
		scanf(" %c", &tourchoice);
	}
	
	TotalPrice = ( chargeperguest + TotalAddTourCharge ) * guest;
	
	printf("TotalPrice  : %.2f\n", TotalPrice);
	
	
	
	return 0;
}

