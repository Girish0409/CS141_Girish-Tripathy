/*Write a sequence to determine nth fibonacchi term in the sequence*/

//include library
#include <iostream>
using namespace std;

//Forming recursing functions

int fib (int i) {
	if (i==1 || i==2) {
		return 1;
			}
	else { 
		return fib(i-1) + fib(i-2) ; 
	}
		}

//Form main function
int main() {
	int i;
		cout << "Welcome to question number 10" << endl;
		cout << "Enter Nth term of fibonacci sequence : " ;
		cin >> i ;
		cout << i << "th term of fibonacci sequence is " << fib(i) << endl ;
return 0;
}
