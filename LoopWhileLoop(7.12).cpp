#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int sum=0;
	while(true){    //The while loop will continue untill when the condition is true 
		int num;
		cin>>num;
		if(n>num){
			cout<<"Okay"<<endl;
			break;
		}else{
			cout<<"Bye"<<endl;
		}
	}
	
	
	
	
	
	return 0;
}
