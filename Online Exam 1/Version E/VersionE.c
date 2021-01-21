/**************************
Online exam - 1 Version E
***************************/

#include <stdio.h>

int main()
{
	char InsuaranceType , FIchoice , NextChoice;
	int MonthlyPremium , NumOfChildrens , TotalAmount;
	
	do{
		printf("Insuarance Type (A/N/D/S) : ");
		scanf(" %c", &InsuaranceType);
		
		if( !( InsuaranceType == 'a' || InsuaranceType == 'A' || InsuaranceType == 'n' || InsuaranceType == 'N' || 
		InsuaranceType == 'd' || InsuaranceType == 'D' || InsuaranceType == 's' || InsuaranceType == 'S' ) ){
			
			printf("Invalid Insuarance Type\n");
			
			return -1;
		}
		
		printf("Family or Individual (F/I) : ");    // F - Family , I - Individual
		scanf(" %c", &FIchoice); // Family or Individual choice
		
		//Arogya
		if(InsuaranceType == 'a' || InsuaranceType == 'A'){
			
			if(FIchoice == 'f' || FIchoice == 'F')
				MonthlyPremium = 5200;
			
			else if(FIchoice == 'i' || FIchoice == 'I')
				MonthlyPremium = 4500;
			
		}
		
		//Niduk
		else if(InsuaranceType == 'n' || InsuaranceType == 'N'){
			
			if(FIchoice == 'f' || FIchoice == 'F')
				MonthlyPremium = 4300;
			
			else if(FIchoice == 'i' || FIchoice == 'I')
				MonthlyPremium = 3100;
			
		}
		
		//Digasiri
		else if(InsuaranceType == 'd' || InsuaranceType == 'D'){
			
			if(FIchoice == 'f' || FIchoice == 'F')
				MonthlyPremium = 4800;
			
			else if(FIchoice == 'i' || FIchoice == 'I')
				MonthlyPremium = 3600;
			
		}
		
		//Suwawewa
		if(InsuaranceType == 's' || InsuaranceType == 'S'){
			
			if(FIchoice == 'f' || FIchoice == 'F')
				MonthlyPremium = 3800;
			
			else if(FIchoice == 'i' || FIchoice == 'I')
				MonthlyPremium = 3300;
			
		}
		
		TotalAmount = MonthlyPremium;
		
		//Family plan
		if(FIchoice == 'f' || FIchoice == 'F'){
			
			printf("Number of Children : ");
			scanf("%d", &NumOfChildrens);
			
			//If children over 2 Total amount calculation
			if(NumOfChildrens > 2){
				
				TotalAmount = MonthlyPremium + ( MonthlyPremium * 0.1 * ( NumOfChildrens -2 ) ) ; 
				
			}
			
		}
		
		printf("Total Amount : %d\n", TotalAmount);
		
		printf("Do you want to continue (Y/N) : ");
		scanf(" %c", &NextChoice);
		
		printf("\n");
		
	}
	while(NextChoice == 'y' || NextChoice == 'Y');
	

	return 0;
}