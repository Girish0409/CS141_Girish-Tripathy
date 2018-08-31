//include the library
#include <iostream>
using namespace std;

//use main function
int main () { 
	int N ; //declaring variable 
		cout << "Welcome to question no. 27" << endl; //Welcome
		cout << "Input N " << endl ; //taking N
		cin >> N ; //assigning value to it
	int i = 1 ; //declaring 
	int sum = 0 ; //declaration
	while ( i <= N ) 
		{ sum = sum + i ; i++ ;  }
		cout << " The summation of 1 to " << N << " is " << sum << endl ; 
return 0;
} 
