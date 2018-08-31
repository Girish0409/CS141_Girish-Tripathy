//include library
#include <iostream>
using namespace std;

//Include main function
int main() {
 	char charVar; //declaring variables
		cout << "Welcome to Question 7" << endl; //Welcoming
		cout << "Enter any character" << endl ; //Ask user for character
		cin >> charVar ; //assigning values 
	if ( charVar>='a' && charVar<='z' || charVar>= 'A' && charVar<='Z' ) { cout << "The character is an alphabet" << endl ; } //validating the condition
	else { cout << "The character is not an alphabet " << endl; }

return 0;  
}
