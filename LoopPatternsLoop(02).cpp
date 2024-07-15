#include<iostream>
using namespace std;
int main() {
	int n,m;   //'n' Numbers of Rows & 'm' Numbers of coloumns
	    cout<<"Please enter number of coloumns : ";
	    cin>>m;
	    cout<<"Please enter numbers of rows : ";
	    cin>>n;
	for(int i=1; i<=n; i++){    //For rows 
		for(int j=1; j<=m; j++){  //For coloumns
			if(i==1 || j==1 || i==n || j==m){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
