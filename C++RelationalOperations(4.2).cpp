#include<iostream>
using namespace std;
int main() {
	int num1=10;
	int num2=20;
	int result;
	    cout<<"The vale of Num 1 : "<<num1<<endl;
	    cout<<"The vale of Num 2 : "<<num2<<endl;
	    
	//Relational Operations : Show the relationship between two numbers.
	//Zero For False & One For True
	//Is Equal To 
	result = num1==num2;
	    cout<<"The Result : "<<result<<endl;  //Zero(false)
	    cout<<".............................\n";
	
	//Is Not Equal To
	result = num1 != num2;
	    cout<<"The Result : "<<result<<endl;  //One(true)
	    cout<<".............................\n";
	
	//Greater than
	result = num1 > num2;
	    cout<<"The Result : "<<result<<endl;  //Zero(false)
	    cout<<".............................\n";
	
	//Less than
	result = num1 < num2;
	    cout<<"The Result : "<<result<<endl;  //One(true)
	    cout<<".............................\n";
	    
	//Greater than Or Equal to
	result = num1 >= num2;
	    cout<<"The Result : "<<result<<endl;  //Zero(false)
	    cout<<".............................\n";
	    
	//Less than Or Equal to
	result = num1 <= num2;
	    cout<<"The Result : "<<result<<endl;  //One(true)
	    cout<<".............................\n";
	return 0;
}
