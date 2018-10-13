/* Find factorial of any number using recurison */

//include library 
#include <iostream>
using namespace std;

//Forming recursing function

int fac(int i) {
	if (i==1) {
		return i; 
		}
	else { 
		return i*fac(i-1) ;
		}
	}

//Forming main function
int main () {
	int i;	
		cout << "Welcome to question no. 9" << endl ;
		cout << "Input any number : " ;
		cin >> i;
		cout << "Factorial of " << i << " is " << fac (i) << endl;
return 0;
}
