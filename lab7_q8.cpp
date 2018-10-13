/*Find the sum of the digit of numbers entered using recursion*/

//Include library
#include <iostream>
using namespace std;

//forminng recursive
int sum ( int i ) {
int y;
	if (i==0) { return 0 ; }
	else {
		y=i%10;
		}
		return (y + sum(i/10)) ;
		}
	
//forming main function
int main () {
int i;
	cout << "Welcome to question no 8" << endl ;
	cout << "Input no : " ;	
	cin >> i;
	cout << "Addition of digits of the number " << i << " is " << sum (i) << endl ;
return 0;
}

	
	

