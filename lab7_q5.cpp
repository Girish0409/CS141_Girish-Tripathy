/*Sum of all even or odd in a given rangesusing recursion*/

//using library
#include <iostream>
using namespace std;

//forming recursive function

int nat(int i, int n) {
	if (i>n) { 
		return 0; 
		}
	else { 
		return i+nat(i+2,n) ; 
		}
	}
//forming main function

int main () {
	int i, n;
		cout << "Welcome to question no. 5" << endl; //welcoming
		cout << "Input starting number : " ; // starting no for a range
		cin >> i ; //assigning value to i
		cout << "Input ending number : " ; //Ending no for a range
		cin >> n ; // Assigning value to n
		cout << "Adding odd/even no in the range " << i << " and " << n << " is " << nat (i,n) << endl ; //printing 
return 0 ;
}

