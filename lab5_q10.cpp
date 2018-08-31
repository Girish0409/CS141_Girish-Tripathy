
//include library
#include <iostream>
using namespace std;

//Include main function
int main() {
 	char charVar; //declaring variables
		cout << "Welcome to Question 10 " << endl; //Welcoming
		cout << "Enter any character" << endl ; //Ask user for character
		cin >> charVar ; //assigning values 
	if ( charVar>='a' && charVar<='z' ) { cout << "The character is a lower case alphabet" << endl ; } //validating the condition
	else if ( charVar>= 'A' && charVar<='Z') { cout << "The character is a upper case alphabet" <<endl; } //validating the condition 
	else {cout << "The character is not an alphabet at all" << endl; }
return 0;
}

