/*Find sum of natural numbers from 1 to n using recursion*/

//using library
#include <iostream>
using namespace std;

//Forming recursive functions

int nat(int i, int n) { 
	if (i==n) {
		return n;
		}
	else { return i+nat(i+1,n); }
		}
//forming main function
int main () {
	int i=1, n, ans;
		cout << "Welcome to question no 4" << endl; //welcome
		cout << "Enter n : " ; //asking user for end no.
		cin >> n ; //assinging values to n 
		
	cout << "The sum of natural numbers from 1 to " << n << " is " << nat(i,n) << endl; 
return 0;
}
