//including library
#include <iostream>
using namespace std;

//use main function
int main () {
int a , b , c ; //declaring variables
cout << "Welcome to Question 5 " << endl ; //Welcome
cout << "Write the first angle in degree" << endl ; //asking the 1st angle
cin >> a ; // assigning the value of 1st angle
cout << "Write the second angle in degree " << endl ; //asking the 2nd angle
cin >> b ; //assigning the value of 2nd angle

c = 180 - ( a+b ) ; //calculating 3rd angle

cout << "The third angle is " << c << " degrees " << endl ; //results

}
