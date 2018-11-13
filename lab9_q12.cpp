/*Write a program to declare two variables a,b and a pointer variable p (all integer type). Try to understand pointers while doing this.
Point p to a. And store the value pointed by p in b. Print the values of a, b and *p.
Assign values a=2 and b = 3. Print the values of a, b and *p.
Now point p to b. Print the values of a, b and *p.*/

//include library 
#include <iostream>
using namespace std;
int main () {
    
//declaring varibles
    int a=2;
    int b;
//declaring pointer
    int *p1=&a;
    int *p2=&b;

//store the value pointed by p in b
    b = *p1 ; 

//print out the value of a, b and p 

        cout << "Welcome to question no 12 " << endl ;
        cout << "The value of a is 2" << endl;
        cout << "p1 is a pointer pointing to a and the value that p1 is pointing to is " << *p1 << endl;
        
        cout << "The value of b that stores the value of a is " << b << endl;
        cout << "p2 is a pointer pointing to b and the value that p2 is pointing to is " << *p2 << endl;
           

}