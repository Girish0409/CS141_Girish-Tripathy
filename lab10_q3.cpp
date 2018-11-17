/*Create a class for rectangle that stores data of length and breadth and has two 
functions : area() and perimeter(). Write a program that uses this class to create two 
rectangles (rectangle objects) of user inputted length and breadth. 
Compare the areas and perimeter of the those rectangles.*/

//include library

#include <iostream>
using namespace std;

class rect {
    public: 
    int x ;
    int y ;
    int area () {
        return x*y ;
    }
    int perimeter () {
        return (2*(x+y)) ;
    }
} ;

int main (){
    rect r1,r2 ;
    int area1, peri1, area2, peri2 ;
        cout << "Welcome to question no 1" << endl;
        cout << "Input the 1st side of 1st rectangle : " ;
        cin >> r1.x ;
        cout << "Input 2nd side of 1st rectangle : " ;
        cin >> r1.y ;
        area1 = r1.area() ;
        peri1 = r1.perimeter() ;
        cout << "The area of 1st rectangle is : " << area1 << endl ;
        cout << "The Perimeter of 1st rectancle is : " << peri1 << endl;

       
        cout << "Input the 1st side of 2nd rectangle : " ;
        cin >> r2.x ;
        cout << "Input 2nd side of 2nd rectangle : " ;
        cin >> r2.y ;
        area2 = r2.area() ;
        peri2 = r2.perimeter() ;
        cout << "The area of 2nd rectangle is : " << area2 << endl ;
        cout << "The Perimeter of 2nd rectancle is : " << peri2 << endl;

        if (area1 > area2) {
            cout << "Area of 1st Rectangle is more than 2nd rectangle" << endl ;
        }

        else {
            cout << "Area of 2nd Rectangle is more than the 1st Rectangle" << endl;
        }

        if (peri1 > peri2) {
            cout << "Perimeter of 1st Rectangle is more than 2nd rectangle" << endl ;
        }

        else {
            cout << "Perimeter of 2nd Rectangle is more than the 1st Rectangle" << endl;
        }

        
}