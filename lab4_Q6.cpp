//include the library
#include <iostream>
using namespace std;

//use main function
int main () {
float b , h , a ; //declaring the variables 
cout << "Welcome to question no. 6 " << endl; //Welcome
cout << "Enter the base length of the triangle" << endl; //base length
cin >> b ; //assign the value to base
cout << "Enter the height of the triangle " << endl; //height of the triangle
cin >> h ; //assign the value to height

a = 0.5 * b * h ; //calculating area

cout << "The area of triangle is " << a << " cm^2 " << endl; //results 
return 0;


}
