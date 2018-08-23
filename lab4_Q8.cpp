// include the libraries
#include <iostream>
using namespace std;

//use main function
int main () {
float e , p , m , c , b , avg , percentage , total ; //declaring variables
cout << "Welcome to Question no. 8" << endl ; // Welcome
cout << "What was your marks in English out of 100? " << endl ; //English
cin >> e ; // assigning value to e
cout << "What was your marks in Physics out of 100? " << endl ; //Physics
cin >> p ; //assigning value to p
cout << "What was your marks in Chemistry out of 100?" << endl ; //Chemistry
cin >>  c ; //assigning value to c
cout << "What was your marks in Biology out of 100?" << endl ; //Biology
cin >> b ; //assigning value to b
cout << "What was your marks in maths out of 100?" <<endl ; //maths
cin >> m ; //assigning value to m
total = p + e + m + c + b ; //calculating total
avg = total/5.00 ; //finding average
percentage = ( total / 500 ) * 100 ; //finding percentage
cout << "Your total marks is " << total << " out of 500 " << endl; //printing total
cout << "The average marks is " << avg << endl ; //printing average
cout << "You got " << percentage << " % " << endl ;
return 0;
}
