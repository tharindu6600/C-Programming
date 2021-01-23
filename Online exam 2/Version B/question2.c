/****************************************
Online exam 2 - Version B - Question 2
*****************************************/

#include <stdio.h>

float getDiscountPrice(int noOfGuests , float chargePerGuedt);
float getAmount(int noOfGuests, float chargePerGuedt , float discount);

int main()
{
	int noOfGuests;
	float chargePerGuest;
	
	printf("Enter no of guests : ");
	scanf("%d",&noOfGuests);
	
	printf("Enter charge per guest : ");
	scanf("%f",&chargePerGuest);
	
	printf("Discount : %f\n",getDiscountPrice(noOfGuests , chargePerGuest) );
	printf("Amount to be paid : %f\n", getAmount(noOfGuests , chargePerGuest , getDiscountPrice(noOfGuests , chargePerGuest) ) ); 
		
	return 0;
}

float getDiscountPrice(int noOfGuests , float chargePerGuest) // Calculate discount
{
	float hotelcharge = noOfGuests * chargePerGuest;
	float discount;
	
	if(noOfGuests > 200)
		discount = hotelcharge * 0.1;
	else 
		discount=0;
	
	return discount;		
}

float getAmount(int noOfGuests, float chargePerGuest , float discount) // Calculate TotalAmount to be paid
{
	float TotalAmount = (noOfGuests * chargePerGuest) - getDiscountPrice(noOfGuests , chargePerGuest);
	
	return TotalAmount;
	
}