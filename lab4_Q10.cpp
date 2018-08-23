//include the library 
#include <iostream>
#include <math.h>
using namespace std;

//use main function
int main () { 
float P , R , T , I ; //Declaring variable
cout << "Welcome to question no 10" << endl ; //welcoming
cout << "What is the principle?" << endl ; //Principle
cin >> P ; // assigning value to P
cout << "What is the rate of interest?" << endl ; //Rate of interest 
cin>> R ; //Assigning value to R
cout << "What is the time in years?" << endl ; //Time in years
cin>> T ; //assigning value to T

I = P * pow(( 1 + R/100.0 ) , T ) ; //calculation of compound interest

cout << "The compound interest is " << I << endl ; //printing value of compound interest
return 0;


}
