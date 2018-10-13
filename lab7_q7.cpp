/* Write a function to check whether it is a palindrome or not*/

//Including library

#include <iostream>
using namespace std;

//forming recursive function
int y=0;
int pal( int i) { 
	int x;
	if (i!=0) { 
		x=i%10;
		y=y*10+x;
		pal (i/10);
		}
		return y;
			}
//forming main function

int main () { 
	int i,j ;
		cout << "Welcome to question no 7" << endl; //welcoming
		cout << "Input the number : "; //Asking user for the number
		cin >> i ; //Input i
		
		if (i==pal(i)) { 
			cout << "The number is a palindromic number" << endl; 
			}
		else { 
			cout << "The number is not a palindromic number" << endl;
			}
return 0;
}

