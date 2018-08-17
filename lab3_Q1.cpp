//include library
#include <iostream>
using namespace std;

// main function
int main() {
//declare variable and assign their functions
int a= 4;
char b= 'g';
float c= 1.2 ;
double d= 3.1434 ;
bool e= 0 ;

// finding the sizes
cout << "The size of integer is " << sizeof(a) << " and the value of interger is " << a << endl ; //properties of integer
cout << "The size of character is " << sizeof(b) << " and the value of integer is " << b << endl ; //properties of character 
cout << "the size of float is " << sizeof(c) << " and the value of integer is " << c << endl ; //properties of float
cout << "the size of double is " << sizeof(d) << " and the value of double is " << d << endl ; //properties of double
cout << "the size of bool is " << sizeof(e) << " and the value of bool is " << e << endl ; //properties of bool
return 0 ;
}
