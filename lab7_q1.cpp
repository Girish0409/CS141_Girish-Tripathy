/* Do a cpp program to find power of any number using recursion*/


#include <iostream> //include library
using namespace std;

int pow(int base , int exp) { 
		if (exp == 0 ) {
			return 1;}  // anything to the power 0 is 1
		else { 
			return base * pow (base , exp - 1); }
}
		
int main() {
	int base, exp , ans ;
		cout << "Welcome to question 1" << endl; //Welcoming
		cout << "Enter base : " ; // Asking user for the base
		cin >> base ; //assigning value to the base
		cout << "Enter positive power or exponent : " ; //Asking user for power or exponent
		cin >> exp ; //assinging value to exp

	ans = pow (base, exp) ; // calling function
		
		cout << base << " ^ " << exp << " = " << ans << endl ;
}


	
	

