//include library
#include <iostream>
using namespace std;

//Include main function
int main() {
 	int a, b ; //declaring variables
		cout << "Welcome to Question 1" << endl; //Welcoming
		cout << "Write 2 numbers" << endl; //Asks the user for number
	cin >> a >> b ; //assigning value to 2 numbers
	if ( a > b ) { cout << "The maximum between " << a << " and " << b << " is " << a << endl; } //If condition is trueee
	else { cout << "The maximum between " << a << " and " << b << " is " << b << endl ; }  //If condition is false
return 0;

}
