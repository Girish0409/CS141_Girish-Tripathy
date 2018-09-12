//include library
#include <iostream>
using namespace std;
int main() {
    int i, j, rows;
	cout << "Welcome to question no 4" << endl;
	cout << "Enter any no. " << endl;
	cin >> rows ;
	cout << "printing" << endl;
	   
    for(i=1; i<=rows; i++)
    {   for(j=1; j<=rows - i; j++) //printing spaces
        {
            cout << "  ";
        }

            for(j=1; j<=rows; j++) //printing stars
        {
            cout << " * ";
        }

           cout << endl; //next line
    }

    return 0;
}
