#include<iostream>
using namespace std;
int main() {
	//Find the sum of digit in a given number?
	int number;
	    cout<<"Please give me the number : ";  //1234
	    cin>>number;
	int sum=0;
	    while(number>0){                    //Condition True ,True , True ,True, False (Program Run)
	    	int lastdigit = number%10;      // 1234%10=4,  123%10=3, 12%10=2, 1%10
	    	sum+=lastdigit;                 // 0+4=4,  4+3=7, 7+2=9, 9+1=10
	    	number=number/10;               //1234/10=123, 123/10=12, 12/10=1, 1/10=0 
		}    
	    cout<<sum;
	    
	    return 0;
}
