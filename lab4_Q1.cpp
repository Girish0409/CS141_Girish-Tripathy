//include the library
#include <iostream>
using namespace std;

//include main function
int main () {
int cm ; //declaring variables
double m , km ; //declaring variables
cout << "Welcome to question 1" << endl; // Welcoming
cout << "Enter length in centimeter" << endl; //Ask length
cin >> cm ; //Assigning value to cm

m = cm / 100.0 ; //converting to meters
km = cm / 100000.0 ; //converting to km

cout << "Converting to meters and kilometers" << endl ; 
cout << "It is " << m << " Metres " << " and " << km << " Kilometers " << endl ; //Results

return 0; 

}
