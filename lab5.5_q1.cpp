//include library
#include <iostream>
using namespace std;
//use main function
int main (){
	int i , j , n ; //declaring variables
		cout << "Welcome to Question 1" << endl ; //Welcome
		cout << "What is the size of the square" << endl ; //asks for the size of the sqaure
		cin >> n ; //assigning value of n
		cout << "Printing" <<endl ;
	for (i=0;i<n;i++) {
	//print n line
		for (j=0;j<n;j++) { cout << "*" ; }//print n starss in n lines 
	cout << endl;  }
return 0 ;
}
