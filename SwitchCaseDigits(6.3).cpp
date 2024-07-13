#include<iostream>
using namespace std;
int main() {
	int digits;
	     cout<<"Please enter the digits : ";
	     cin>>digits;
	     cout<<"You have entered : ";
	switch(digits){
		case 0:
			cout<<"Zero";
			break;
		case 01:
			cout<<"One";
			break;
		case 02:
			cout<<"Two";
			break;
		case 03:
			cout<<"Three";
			break;
		case 04:
			cout<<"Four";
			break;
		case 06:
			cout<<"Six";
			break;
		case 07:
			cout<<"Seven";
			break;
		case 8:
			cout<<"Eight";
			break;
		case 9:
			cout<<"Nine";
			break;
		case 10:
			cout<<"Ten";
			break;
		default:
			cout<<"Wrong digit"<<endl;
			cout<<"Please try again"<<endl;
	}
}
