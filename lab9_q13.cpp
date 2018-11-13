/*Create an array of size 10. Use a loop to print array using the normal index method as well as the pointer method.*/

//include library

#include <iostream>
using namespace std;

int main() {
    int Arr [10] = { 1,2,3,4,5,6,7,8,9,10 } ; //Declaring an array
    int i,j ;
        cout << "Welcome to question no 13" << endl; cout << endl;
        cout << "The integer array Arr has elements namely 1,2,3,4,5,6,7,8,9,10" << endl ; cout << endl;
        cout << "Printing array using normal index method" << endl ;

        for (i=0;i<10;i++){
            cout << Arr [i] << " "  ;
        }
        cout << endl;
        cout << endl;

        cout << "Printing array using pointer method" << endl;

        int *p = Arr ;

        for (j=0;j<10;j++) {
            cout << *(p+j) << " " ;
        } 
        
        cout << endl; 
}