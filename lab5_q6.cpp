//include library
#include <iostream>
using namespace std;

//Include main function
int main() {
 	int a ; //declaring variables
		cout << "Welcome to Question 6" << endl; //Welcoming
		cout << "Enter year" << endl ;
		cin >> a ;
	if ( a % 4 == 0 && a % 100 != 0 ) { cout << "The year " << a << " is a leap year " << endl ; } //Validating the condition
	else if ( a % 100 == 0 && a % 400 ) { cout << "The year " << a << " is a leap year " << endl ; } //validating the conditions
	else if ( a % 400 == 0 ) { cout << "The year " << a << " is a leap year " << endl ; } //validating the conditions
	else { cout << "The year " << a << " is not a leap year " << endl ; }
return 0;
} 
