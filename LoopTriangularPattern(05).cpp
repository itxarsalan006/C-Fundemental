#include<iostream>
using namespace std;
int main() {
	int n;   //'n' Numbers of Rows 
	    cout<<"Please enter numbers of rows : ";
	    cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=(n-i); j++){  //For space (n-i) when n=3 => 3-1=2, 3-2=1, 3-3=0
			cout<<" ";
    }
		for(int j=1; j<=(2*i-1); j++){  //For * (2*i-1) when n=3 => 2*1-1=1, 2*2-1=3, 2*3-1=5
			cout<<"*";
		}
		cout<<endl;
		}
		
    
    return 0;
	}

