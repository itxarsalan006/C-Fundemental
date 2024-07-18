#include<iostream>
using namespace std;
int main() {
	int n;   //'n' Numbers of Rows 
	    cout<<"Please enter numbers of rows : ";
	    cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i+1; j++){   // j<=n-i+1 (4-1+1)=4 ;(4-2+1)=3 Similiarly
			cout<<"*";
		}
		cout<<endl;
	}
	
	
	
	
	
	
	return 0;
}
