#include<iostream>
using namespace std;
int main() {
	//Find the sum of following series?
	int number;
	    cout<<"Please give me the series : ";  //10
	    cin>>number;
	int result=0;                              //For storning the result values
	    for(int i=1; i<=number; i++){          //Using for loop
	    	if(i%2==0){                        //Even number subtract
	    		result-=i;                     
			}else{
				result+=i;                     //Odd number add
			}
			
		}
		cout<<result<<endl;
	
	
	
	
	
	
	
	
	
	return 0;
}
