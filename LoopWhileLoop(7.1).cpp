#include<iostream>
using namespace std;
int main() {
	int num;
	    cout<<"Please enter the number : ";
	    cin>>num;
	int sum=0; //Setting the value of sum
	int i=1; //Loop variable
	
	while(i <= num) {
	    sum += i;  //Means a+= (a+1)
	    i++;    // Value update
    }
	cout<<sum<<endl;
	
	
	
	
	return 0;
}
