#include<iostream>
using namespace std;
int main() {
	//Reverse the digit of a number solution?
	int number;
	    cout<<"Please give me the number : ";  //1234
	    cin>>number;
	int reverse=0;
	    while(number>0){                      //Condition True ,True , True ,True, False (Program Run)
	        int lastdigit=number%10;         // 1234%10=4,  123%10=3, 12%10=2, 1%10
			reverse=reverse*10+lastdigit;   //0*10+4=4, 4*10+3=43, 43*10+2=432, 432*10+1=4321
			number=number/10;	           //1234/10=123, 123/10=12, 12/10=1, 1/10=0 
		 }
		 
		cout<<reverse;
		
	return 0;
}
