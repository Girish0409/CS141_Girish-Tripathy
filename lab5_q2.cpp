//include library
#include <iostream>
using namespace std;

//Include main function
int main() {
 	int a, b, c; //declaring variables
		cout << "Welcome to Question 2" << endl; //Welcoming
		cout << "Write 3 numbers" <<endl; //asking user for 3 numbers
		cin >> a >> b >> c ; //assigning values 
	if ( a > b && a > c ) { cout << "The maximum between " << a << " , "<< b << " , " << c << " is " << a << endl ; } //If condition validates 
	else if ( b > a && b > c ) { cout << "The maximum between " << a << " , " << b << " , " << c << " is " << b << endl ; } //If condition validates 
	else { cout << "The maximum between " << a << " , " << b << " , " << c  << " is " << c << endl ; } //If condition validates
return 0;
}
