/*Write a program to merge 2 arrays (just one after another into another array), 
find maximum of 2 arrays [maximum element of all the elements in both the arrays], find minimum of 2 arrays [similar to maximum]. (Use functions for each)*/

#include <iostream> 
using namespace std;

//defining functions

int merge (int i, int j) {
    int k, l, m, a, large, small;
    int arr1 [i] ; //defining 1st array
    int arr2 [j] ; //defining 2nd array
    int arrMerge [i+j] ; //defining merged array

//1st array
        for (k=0 ; k<i ; k++) {
            cout << "Input " << k+1 << "th element of the 1st array : " ;
            cin >> arr1 [k];
        }

        cout << "1st Array is" << endl ;

        for (k=0; k < i ; k++) {
            cout << arr1 [k] << " " ;
        }

        cout << endl;

//2nd array

        for (l=0 ; l<j ; l++) {
            cout << "Input " << l+1 << "th element of the 2nd array : " ;
            cin >> arr2 [l] ;
        }

        cout << "2nd Array is " << endl ;
        for (l=0; l < j ; l++) {
            cout << arr2 [l] << " " ;
        }

        cout << endl;

//merging array1 and array2 to make a new array of size array1 + array2. 

    for (m=0 ; m < i ; m++) {
        arrMerge [m] = arr1 [m] ;
    }

    for (m=i ; m < (j+i); m++) {
        arrMerge [m] = arr2 [m-i] ;
    }

    cout << "The merged array is " ;

    for (m = 0 ; m < (i+j) ; m++) {
        cout << arrMerge[m] << " " ;
    }
    cout << endl ;

//finding the largest and smallest element of the merged array

    cout << "Input the option no. you want to find" << endl;
    cout << "1. Largest element of the merged array" << endl;
    cout << "2. Smallest element of the merged array" << endl;
    cout << "Option : " ;
    cin >> a;

    if (a==1) {
        large = arrMerge [0];
        for (m=0 ; m < (j+i) ; m++) {
            if (large < arrMerge [m]){
                large = arrMerge [m]; 
            }
        
        }
    cout << "The largest element is " << large << endl;
                 
    }

    else if (a==2) {
        small = arrMerge [0];
        for (m=0 ; m < (j+i) ; m++) {
            if (small > arrMerge [m]){
                small = arrMerge [m]; 
            }
        
        }
    cout << "The smallest element is " << small << endl;

    }

    else {
        cout <<  "Try again. Invalid option!" << endl;
    }

}

int main () {
    int i, j;
        cout << "Welcome to question no 4" << endl;
        cout << "Input the size of the 1st array : " ;
        cin >> i ;
        cout << "Input the size of the 2nd array : " ;
        cin >> j ;
        merge (i, j);
}