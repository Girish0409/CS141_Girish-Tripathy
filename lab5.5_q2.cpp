//include library 
#include <iostream>
using namespace std;
//include main function
int main() { 
	int i, j ,n; //defining variable
		cout << "Welcome to question 2" << endl; //Welcoming
		cout << "What is the size of the sqaure" <<endl; //Asking user for the size of the sq
		cin >> n ; //assigning value to n
		cout << "Printing"<<endl ;
//printing n stars in 1st and last line
	for (i=0;i<n;i++) {
		if (i==0 || i==n-1) { 	
			for (j=0;j<n;j++) {
				cout << "* " ;
					}
				}
//printing * in the 1st column n-2 spaces
		else { cout << "* " ;
			for (j=0;j<n-2;j++) {
				cout << "  " ;
					}
//printing * in the last column
			cout << "* ";
			}
//next line
		cout << endl;
			}
		
return 0;
}
			
			
