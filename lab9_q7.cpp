/*Write a function countEven(int*, int) which receives an integer array and its size, and returns the number of even numbers in the array.*/

//include library
#include <iostream>
using namespace std;

int countEven (int i){
    int *p;
    int j ;
    int arr [i];

    for (j=0 ; j < i ; j++) {
            cout << "Enter " << j + 1 << " Element of the array : " ;
            cin >> arr [j] ;
        }

    cout << "Even numbers in the array are " ;
    for (p = arr ; *p < arr[i]; p++){
        if (*p % 2 == 0) {
            cout << *p ;
        }    
    }
    cout << endl;
}

int main(){
    int i ;
        cout << "Welcome to question no. 7" << endl;
        cout << "Input the size of the integer array : " ;
        cin >> i ;
     
        countEven(i) ;
}