#include<iostream>
using namespace std;
int main() {
	int num1=20;
	int num2=10;
	int result;
	    cout<<"The vale of Num 1 : "<<num1<<endl;
	    cout<<"The vale of Num 2 : "<<num2<<endl;
	
	//Logical Operation
	//Logical And &&
	num1= true;
	num2= true;
	result=num1 && num2;
	    cout<<"result : "<<result<<endl; // One(true)
	num1= true;
	num2= false;
	result=num1 && num2;
     	cout<<"result : "<<result<<endl; // Zero(false)
	    cout<<"-----------------------------------------\n";
	    
	//Logical Or ||
	num1= true;
	num2= true;
	result=num1 || num2;
	    cout<<"result : "<<result<<endl; // One(true)

	num1= true;
	num2= false;
	result=num1 || num2;
     	cout<<"result : "<<result<<endl; // One(true)
   
    num1= false;
	num2= false;
	result=num1 || num2;
     	cout<<"result : "<<result<<endl; // Zero(false)
	    cout<<"-----------------------------------------\n";
    	
    //Logical Not ! : Simply means Complement Or invertor
    num1= ! true;
        cout<<num1<<endl; // Zero(false)
        cout<<"----------------------------------------\n";
        
    num1=! false;
    cout<<num1<<endl; // One(true)
       
    
	return 0;
}
