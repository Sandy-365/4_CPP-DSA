#include <iostream>
using namespace std;

int main(){
	
	int i,j,row,col,num=1;
	
	cout << "row ::>> ";
	cin >> row;
	cout << "col ::>> ";
	cin >> col;
	
	for(i=1;i<=row;i++){
		for(j=1;j<=col;j++){
			cout << num ;
			num=num+1;
		}
		cout << endl;
	}
	
}
