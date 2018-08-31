//include library
#include <iostream>
using namespace std;

//Include main function
int main() {
 	int a; //declaring variables
		cout << "Welcome to Question 3" << endl; //Welcoming
		cout << "Write a number" << endl; //Asks user for a number
		cin >> a ; //assigning value
	if ( a < 0 ) { cout << "The number " << a << " is negative " << endl; } //If condition validates
	else if ( a > 0 ) { cout << "The number " << a << " is positive " << endl ; } //If condition validates
	else { cout << "The number " << a << " is " << "0" << " Because zero is zero " << endl ; }
return 0;
}
