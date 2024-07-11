#include<iostream>
using namespace std;
int main() {
	int num1 = 10;
	int num2 = 20;
	
	    cout<<"The value of Num 1 : "<<num1<<endl;
	    cout<<"The value of Num 2 : "<<num2<<endl;
	    cout<<".............................................."<<endl;
	
	int num3;
	num3 = num1;
	num1 = num2;
	num2 = num3;
	
	    cout<<"The value of Num 1 : "<<num1<<endl;
	    cout<<"The value of Num 2 : "<<num2<<endl;
	
	
	
	return 0;
}
