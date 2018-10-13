/*Write a c++ program to print all even or odd numbers in given range using recursion*/

//include library

#include <iostream> 
using namespace std;

int even(int i, int j) { 
	if (i==j) {
		return 0 ; 
	}
	else {
		cout << i << endl ; 
	}
	
	even (i+2 , j) ;
	
}


int main () {
	int i,j,k ;
		cout << "Welcome to question no. 1" << endl;
		cout << "What is the starting point : " ;
		cin >> i ;
		cout << "What is the ending point : " ;
		cin >> j ;

	even (i , j) ;
return 0;
}
