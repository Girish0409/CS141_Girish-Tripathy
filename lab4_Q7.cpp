//include the library
#include <iostream>
#include <math.h>
using namespace std;
//use main function 
int main () {
float x , a ; //declaring the variables
cout << "Welcome to Question no. 7 "  << endl ; //Welcome
cout << "What is the side of equilateral triangle? " << endl ; //Side of the equilateral triangle
cin >> x ; //assigning the value of x
a = ( sqrt(3) * pow(x,2) ) / 4 ; //calculation
cout << "The area of the equilateral triangle of side " << x <<  " is " << a << "cm^2" << endl ; //results
return 0;
}
