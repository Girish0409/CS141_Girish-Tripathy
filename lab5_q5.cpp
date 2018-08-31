//include library
#include <iostream>
using namespace std;

//Include main function
int main() {
 	int a; //declaring variables
		cout << "Welcome to Question 5" << endl; //Welcoming
		cout << "Write any number " << endl ; //asks user for a number
		cin >> a ; //assigning the value 
	if ( a % 2 == 0 ) { cout << "The number " << a << " is an even number " << endl; } //validating the condition
	else { cout << " The number " << a << " is an odd number " << endl; }
return 0;
}

