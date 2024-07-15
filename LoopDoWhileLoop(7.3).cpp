#include<iostream>
using namespace std;
int main() {
	int num;
	    cout<<"Please enter the number : "; //How many time prints
	    cin>>num;
	int sum=0;
	do{
		int num1; 
		    cout<<"Please enter the 2nd number : "; //Print the 2nd  number
		    cin>>num1;
		    sum+=num1; //adding the number into the sum sum+=num1 == sum+num1
		    num--; //descrement of num 
	}while(num>0);
	    cout<<sum<<endl;
	    
	    return 0;
}
