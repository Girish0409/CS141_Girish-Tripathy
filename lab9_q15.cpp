/*We want to show string repeatedly by shifting top character of string to right. */

//include library 

#include <iostream> 
using namespace std;
int main () {
    char str[20] ; 
    int i;
   
        cout << "Welcome to question no. 15" << endl;
        cout << "Input less than 20 characters in a string" << endl;
        cin >> str;

    char *p ;
    for (p=str ; *p != 0 ; p++) { 
        cout << p << endl;
    }
   
}
