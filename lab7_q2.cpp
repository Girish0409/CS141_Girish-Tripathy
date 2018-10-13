/*Write a C++ program to print 1 to n using recursion*/

// including library

#include <iostream>
using namespace std;

//Defining a self calling function or recursive function


int Nat(int j, int i) {
	if (i<=j) { 
		cout << i << endl ;
		Nat (j , i+1) ;
		 }
			
		
	else { 
		return 0 ; 
		 
		  
		}
	}

//Initianting main function

int main () { 
	int j, i=1;
	
		cout << "Welcome to question no. 2" << endl ; //Welcome
		cout << "Enter no. : " ; //asking user for n
		cin >> j ; //assigning n to j
		Nat (j , i) ; //calling function

return 0;
}


