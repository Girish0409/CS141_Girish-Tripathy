//include library
#include <iostream>
using namespace std;

//Include main function
int main() {
 	char charVar; //declaring variables
		cout << "Welcome to Question 8" << endl; //Welcoming
		cout << "Input any alphabet" << endl; //Taking input	
		cin >> charVar; //assigning value 	
	if ( charVar=='a' || charVar=='e' || charVar=='i' || charVar=='o' || charVar=='u' || charVar=='A' || charVar=='E' || charVar=='I' || charVar=='O' || charVar=='U') //validating the conditions
			{ cout << "The alphabet " << charVar << " is a vovel " << endl; }
	else { cout << "The alphabet " << charVar << " is a consonent " << endl; }
return 0;
}
