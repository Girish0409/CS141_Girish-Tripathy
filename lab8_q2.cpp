/*Write a program to find the largest, smallest, mean, median,
 elements with highest frequency of the elements of all elements of an array. 
 (Use functions for each of the task in the question)*/

#include <iostream> 
 using namespace std;

 //Finding largest element 

int largest(int i) {
    int j;
    int array [i] ;
        for (j=0 ; j<i ; j++) {
            cout << "Input " << j+1 << "th element of the array : " ;
            cin >> array [j] ;
        }
    
    int large = array [0];
        for (j=0 ; j < i ; j++) {
            if (large < array [j]){
                large = array [j]; 
            }
        
        }
    cout << "The largest element is " << large << endl;
}

//finding smallest element

int smallest(int i) {
    int j;
    int array [i] ;
        for (j=0 ; j<i ; j++) {
            cout << "Input " << j+1 << "th element of the array : " ;
            cin >> array [j] ;
        }
    
    int small = array [0];
        for (j=0 ; j < i ; j++) {
            if (small > array [j]){
                small = array [j]; 
            }
        
        }
    cout << "The smallest element is " << small << endl;

}

//Finding mean

int mean(int i) {
    int j;
    float sum = 0.0;
    float Mean;
    float array [i] ;

            for (j=0 ; j < i ; j++ ) {
                    cout << "Input " << j + 1 << "th element : " ;
                    cin >> array [j] ;
            }

            for (j=0 ; j<i ; j++) {
                    sum = sum + array [j];
            }
        
        Mean = sum / i ;

        cout << "The mean of the given element is " << Mean << endl;

}



int main () {
    int j ;
    int i;
        cout << "Welcome to question no. 2 " << endl;
        cout << "Input the size of the array : " ;
        cin >> i;
        cout << "Input the option no. you want to find ?" << endl;
        cout << "1. Largest" << endl;
        cout << "2. Smallest" << endl;
        cout << "3. Mean" << endl ;
        cout << "4. Median" << endl;
        cout << "5. Most frequent element" << endl;
        cout << "Option : ";
        cin >> j;

        if (j==1){
            largest (i);
        }

        else if (j==2){
            smallest (i);
        }

        else if (j==3) {
            mean (i);
        }

        else { 
            cout << "Sorry sir, Ye vala i am not able to code, baaki sara ho gya" << endl;
        }
        
       
}
