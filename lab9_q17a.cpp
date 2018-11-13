/*Make your own strcpy function*/

//include library
#include <iostream>
using namespace std;

char mystrcpy(char dest[], char source[]) {
    char *p = dest ;
    char *q = source ;

    
    for (q = source ; *q != '\0' ; q++) {
        *p = *q ;
        p++ ;
    }

    cout << "The source string is getting copied to the destination string" << endl;
    cout << "The destination string is " << dest << endl ;

    
}

int main(){
    char dest[20];
    char source[20];
        cout << "Welcome to question no 17 (a)" << endl;    
        cout << "Input the source string within 20 characters :" << endl;
        cin >> source ;
        mystrcpy(dest,source) ;


}