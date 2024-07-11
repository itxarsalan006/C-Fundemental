#include<iostream>
using namespace std;
int main() {
	int apple;
	int mango;
	    cout<<"Please enter the quantity of Apple : " <<apple;
	    cin>>apple;
	    cout<<"Please enter the quantity of Mango : " <<mango;
	    cin>>mango;
	    cout<<"--------------------------------------------------------------"<<endl;
	    
	int box;
	box=apple;
	apple=mango;
	mango=apple;
	    cout<<"Please enter the quantity of Apple : " <<apple<<endl;
	    cout<<"Please enter the quantity of Mongoe : " <<mango<<endl;
	
	
	return 0;
}
