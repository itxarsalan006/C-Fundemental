#include<iostream>
using namespace std;
int main() {
	//Count the number of digits for a given number?
	int number;
	    cout<<"Please give me the number : ";  //1234
	    cin>>number;
	int digits=0;
	    while(number>0){
	    	digits++;        //12->13, 3->4, 0->0
	    	number=number/10;  // 123/10=12,  13/10=3 ,4/10=0  
	    	
	    	
	}
	    cout<<digits; 	     
	
	
	
	
	
	
	
	
	
	
	return 0;
}
