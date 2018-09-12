//include library
#include<iostream>
using namespace std;

int main (){
int n;
	cout << "Welcome to question no 3" << endl ;
	cout<<"Enter any odd no.";	
	cin>>n;
	cout << "Printing" << endl; 
	if (n%2==1){ //to check whether the n is odd or not 
  for (int i=1; i<=n; i++){
     for(int j=1; j<=n; j++){ 
  if (i==1||i==n||j==1||j==n||i==j||i==n-j+1){   //the equation in red color will print the left to
                                                 // right diagonal and the equation in yellow will
                                                 // print right to left diagonal.

  cout<<"*";                                                    
     }

     else{
    cout<<" ";
     }


     }

     cout<<endl;
  }

}

return 0;


}
