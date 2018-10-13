/*Write a cpp program to print reverse of a number*/

//include library
#include <iostream>
using namespace std;

//form recursive function

int rev(int i) {
	if ( i > 0 && i < 10 ) {
		return i; 
			}
	else { cout << i%10 ; }
	rev (i/10) ;
		}

//form main function

int main () {
	int i;
		cout << "Welcome to question no. 6" << endl; //Welcoming
		cout << "Input the number : " ; //Asking user for the number to be reversed
		cin >> i ; //Assigning value to i
		cout << "The reverse of " << i << " is " << rev(i) << endl; //Printing the reverse
return 0;
}

