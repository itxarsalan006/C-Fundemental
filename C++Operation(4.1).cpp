#include<iostream>
using namespace std;
int main() {
	int num1 = 25;
	int num2 = 5;
	    cout<<"The value of  Num 1  : "<<num1<<endl;
	    cout<<"The value of  Num 2 : "<<num2<<endl;	    
	    int result;

	    //Addition Operation 
	    result = num1 + num2;
	        cout<<"The Result : "<<result<<endl; // 30
	        cout<<".................................................."<<endl;

	    //Subtraction Operation 
	    result = num1 - num2;
		    cout<<"The Result : "<<result<<endl; // 20
	        cout<<".................................................."<<endl; 

	    //Multiplication Operation
	    result = num1 * num2;
		    cout<<"The Result : "<<result<<endl; // 125
	        cout<<".................................................."<<endl; 

	    //Division 	Operation
	     result = num1 / num2;
		    cout<<"The Result : "<<result<<endl; // 5
	        cout<<".................................................."<<endl; 

	    //Moduls Operation aslo called Remainder
	     result = num1 % num2;
		    cout<<"The Result : "<<result<<endl; // 0
	        cout<<".................................................."<<endl; 

	    //Increment Operation 
	    num1++; 
	    cout<<"The Result : "<<num1<<endl; // 26
	    cout<<"......................................................"<<endl;

	    //Descrement Operation
	    num2 --; 
	    cout<<"The Result : "<<num2<<endl; // 4
	
	return 0;
}
