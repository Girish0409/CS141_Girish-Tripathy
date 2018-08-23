//include library 
#include <iostream>
using namespace std;
//include main function
int main () {
float P , R , T , I ; //Declaring variable
cout << " Welcome to Question no. 9 " << endl ; //Welcome
cout << "What is the principle?" << endl ; //Principle
cin >> P ; // assigning value to P
cout << "What is the rate of interest?" << endl ; //Rate of interest 
cin>> R ; //Assigning value to R
cout << "What is the time in years?" << endl ; //Time in years
cin>> T ; //assigning value to T

I = (P*R*T) / 100.0 ; //calculating interest

cout << "The simple interest payable is " << I << endl ; //Printing value of simple interest
return 0;
}
