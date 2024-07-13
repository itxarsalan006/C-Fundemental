#include<iostream>
using namespace std;
int main() {
	int day;
	cout<<"Please enter the days number : ";
	cin>>day;
	
	
	switch (day) {
		case 01:
			cout<<"Monday";
			break;
		case 02:
			cout<<"Tuesday";
			break;
		case 03:
			cout<<"Wednesday";
			break;
		case 04:
			cout<<"Thrusday";
			break;
		case 05:
			cout<<"Friday";
			break;
		case 06:
			cout<<"Saturday";
			break;
		case 07:
			cout<<"Sunday";
			break;
		default:
			cout<<"The number is not include"<<endl;
			cout<<"Please try again"<<endl;
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
