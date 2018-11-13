/*Make your own strcat function*/

//include library
#include <iostream>
using namespace std;

char mystrcat (char dest[] , char src []){
    char cat[40];
    char *p = dest ;
    char *q = src ;
    char *c = cat ;

    for (p=dest;*p != '\0' ; p++) {
        *c = *p ;
        c++ ;
    }

    *c = '\0' ;

    for (q=src ; *q != '\0' ; q++){
        *c = *q ;
        c++ ;

    }

    cout << "The concatnated string is " << cat << endl;




}

int main (){
    char dest[20];
    char src[20];
        cout << "Welcome to question no 17th b" << endl;
        cout << "Input 1st string under 20 characters :" << endl;
        cin >> dest ;
        cout << "Input second string under 20 characters : " << endl;
        cin >> src;

        mystrcat(dest,src) ;
}