#include<iostream>
using namespace std;
int main() {
	int a;
	int b;
	    cout<<"The vale of A : "<<a<<endl;
	// The value of a updated when we are going to the next operations.  
	// 1) = 
	a = 10;
	b = a;
	    cout<<"The vale of B : "<<b<<endl;  //10
	    cout<<"________________________________\n";
	
	// 2) +=
	a+=5;
    	cout<<"The Result : "<<a<<endl;  // 15
    	cout<<"________________________________\n";
 	
	// 3) -=
	a -=5;
    	cout<<"The Result : "<<a<<endl;  // 10
    	cout<<"________________________________\n";
	
	// 4) *=
	a*=5;
	    cout<<"The Result : "<<a<<endl;  // 50 
    	cout<<"________________________________\n";
	
    // 5) /=
	a/=5;
    	cout<<"The Result : "<<a<<endl;  // 2
    	cout<<"________________________________\n";
	
    // 6) %=
	a%=5;
    	cout<<"The Result : "<<a<<endl;  // O
    	cout<<"________________________________\n";
	return 0;
}
