//include library
#include <iostream>
using namespace std;
int main()
{
    int i, j, rows;
	cout << "Welcome to question no 5" << endl;
	cout << "Enter any number " << endl;
	cin >> rows;
	cout << "printing" << endl;
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++) //printing spaces
        {
            cout << " ";
        }

             for(j=1; j<=rows; j++) //printing stars
        {
            if(i==1 || i==rows || j==1 || j==rows)
                cout << "* ";
            else
                cout << " ";
        }

        cout << endl; // printing next line
    }

    return 0;
}
