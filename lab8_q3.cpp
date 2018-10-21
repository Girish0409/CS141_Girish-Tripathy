/*Write a program for kth largest, kth smallest element of an array. (Use functions : e.g. klarge (int array[], int size, int k), similarly for smallest)*/

#include <iostream>
using namespace std;

int largest(int i) {
    int array[i];
    int j, ele;
        for (j=0;j<i;j++) {
            cout << "Input the " << j+1 << "th element of the array : " ;
            cin >> array [j] ;
        }

    int large = array[0] ;

        for (j=0 ; j<i ; j++) {
            if (large < array[j]) {
                large = array[j];
                ele = j;
            
            }
            
        }
    cout << "The largest is the " << ele+1 << "th element that is " << large <<endl;
        
}

int smallest(int i) {
    int array[i];
    int j, ele;
        for (j=0;j<i;j++) {
            cout << "Input the " << j+1 << "th element of the array : " ;
            cin >> array [j] ;
        }

    int small = array[0] ;

        for (j=0 ; j<i ; j++) {
            if (small > array[j]) {
                small = array[j];
                ele = j;
            
            }
            
        }
    cout << "The smallest is the " << ele+1 << "th element that is " << small <<endl;
        
}



int main () {
    int i,j;
        cout << "Welcome to question no 3" << endl;
        cout << "What is the size of the array : " ;
        cin >> i ;
        cout << "Enter the option no. you want to find " << endl;
        cout << "1. kth Largest element" << endl;
        cout << "2. kth Smallest element" << endl; 
        cout << "Option No : " ;
        cin >> j ; 

        if (j==1) {
            largest (i) ;
        }

        else if (j==2) {
            smallest (i);
        }

        else {
            cout << "Try again" << endl;
        }
        
}