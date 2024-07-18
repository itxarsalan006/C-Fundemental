#include<iostream>
using namespace std;
int main() {
	int n,m;   //'n' Numbers of Rows & 'm' Numbers of coloumns
    	cout<<"Please enter number of coloumns : ";
    	cin>>m;
    	cout<<"Please enter numbers of rows : ";
    	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if((i+j)%2==0){
				cout<<"1";
			}else{
				cout<<"2";
			}
		}
		cout<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
