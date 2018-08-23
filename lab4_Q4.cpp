//include library
#include <iostream>
using namespace std;

//include main function
int main () {
float D , W , Y ; //declaring variables
cout << "Welcome to Question 4 " << endl ; //Welcome
cout << "Write the no. of days" << endl ; //No. of days
cin >> D ; //Assigning the value of days

W = D/7 ; //converting to weeks
Y = D/365 ; //converting to years

cout << "The numbers of days are " << D << " Days " << endl ; //result
cout << "The number of weeks are " << W << " Weeks " << endl ; //result
cout << "The number of years are " << Y << " Years " << endl ; //result
return 0;

}
