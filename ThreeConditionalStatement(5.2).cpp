#include<iostream>
using namespace std;
int main() {
	int age;
	    cout<<"Please enter the age: ";
	    cin>>age;
	    if(age < 12 ){
	    	cout<<"Children"<<endl;
		}else if(age>18){
			cout<<"Adults"<<endl;
		}else{
			cout<<"Teenager"<<endl;
		}
	
	return 0;
}
