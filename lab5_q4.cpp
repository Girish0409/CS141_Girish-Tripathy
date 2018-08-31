//include library
#include <iostream>
using namespace std;

//Include main function
int main() {
 	int a ; //declaring variables
		cout << "Welcome to Question 4" << endl; //Welcoming
		cout << "Write any number" << endl ; //Asks user for a number 
		cin >> a ; // Assingning value
	if ( a % 5 == 0 && a % 11 == 0 ) {cout << "The number " << a << " is " << " is divisible by 5 and 11 both " << endl; } //if condition validate
	else { cout << "The number " << a << " is not divible by 5 and 11 " << endl ; }
return 0;
}
