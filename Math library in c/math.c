#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	// printceil(x) --- Return the larger integar near to the x
	
		printf("ceil(9.2) = %f\n", ceil(9.2) );     // 10.000000
		printf("ceil(9.5) = %f\n\n", ceil(9.5) );   // 10.000000
		
	
	// floor(x) --- Return the near smaller integar near to the x
	
		printf("floor(9.2)) = %f\n", floor(9.2) );      // 9.000000
		printf("floor(9.5)  = %f\n\n", floor(9.5) );    // 9.000000


	// pow(x,y) --- Return the x raised to the power of y
	
		printf("pow(2,3) = %f\n", pow(2 , 3) );    // 8.000000
		printf("pow(2.5 , 3) = %f\n", pow(2.5 , 3) );   // 15.625000
		printf("pow(2 , 3.5) = %f\n", pow(2 , 3.5) );   // 11.313708
		printf("pow(3.2 , 2.5) = %f\n\n", pow(3.2 , 2.5) );   // 18.317869
	
	
	// sqrt(x) --- Return the sqare root of x
	
		printf("sqrt(25) = %f\n", sqrt(25) );  // 5.000000
		printf("sqrt(2.5) = %f\n\n", sqrt(2.5) );   // 1.581139
	
	
	// round(x) --- Return the nearest smaller integer if fraction value of x  1 to 5   &   Return the nearest larger integer if fraction value of x  6 to 9
	
		printf("round(8.5) = %f\n" , round(8.5));   // 9.000000
		printf("round(5.45) = %f\n" , round(5.45));   // 5.000000
		printf("round(3.8) = %f\n\n" , round(3.6));   // 4.000000
	
	
	//  abs(x) --- Return the absoulue value (positive value) of x (non floating point).   if we use abs we should include #include <stdlib.h> too
	
		printf("abs(5) = %d\n", abs(5));   // 5.000000
		printf("abs(-5) = %d\n", abs(-5));   // 5.000000
		printf("abs(-3) = %d\n\n", abs(-3));   // 3.000000
	
	
	// fabs(x) --- Return the floating point absoulue value (positive value) of x. 
	
		printf("fabs(-1.55) = %f\n\n", fabs(-1.55));   // 5.000000
		
		
	// trunc(x) --- Truncated the floating points values
	
		printf("trunc(12.12345) = %f\n\n", trunc(12.12345));   // 12.000000
		

	
	return 0;
}