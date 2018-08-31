//include library
#include <iostream>
using namespace std;

//Include main function
int main() {
 	char charVar; //declaring variables
		cout << "Welcome to Question 9" << endl; //Welcoming
		cout << "Enter any character" << endl ; //Ask user for character
		cin >> charVar ; //assigning values 
	if ( charVar>='a' && charVar<='z' || charVar>= 'A' && charVar<='Z' ) { cout << "The character is an alphabet" << endl ; } //validating the condition
	else if ( charVar >= '0' && charVar <= '9') { cout << "The character is a digit" << endl ; } //validating the conditions
	else { cout << "The character is a special character" << endl ; }
return 0; 
}

