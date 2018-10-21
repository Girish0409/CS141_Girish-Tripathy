/*Write a program to find the sum  of all the elements of the array*/

//include library 
#include <iostream>
using namespace std;

int arr(int i) {
int j;
int sum = 0;
int array [i] ;

        for (j=0 ; j < i ; j++ ) {
                cout << "Input " << j + 1 << "th element : " ;
                cin >> array [j] ;
        }

        for (j=0 ; j<i ; j++) {
                sum = sum + array [j];
        }

	cout << "The sum of the input array elements is " << sum << endl ;
    
}

int main () { 
        int i; 
		cout << "Welcome to quenstion no 1 " << endl ;
		cout << "Input the size of the array : " ;
		cin >> i ;

        arr (i) ;
}
