#include<iostream>
using namespace std;
int main() {
	//Print the frist number factroial numbers?
	//Factorial Number:
	//                n!=n*(n-1)*(n-2)*(n-3)............
	//                n!=n*(n-1)!
	//                1!=1,  2!=2*1!,  3!=3*2!  upto so on.
	int number;
	    cout<<"Please give me the number : ";  //1234
	    cin>>number;
	int factorial=1;
	     for(int i=1; i<=number; i++){
	     	factorial*=i;
	     	cout<<factorial<<endl;
		 }
}
