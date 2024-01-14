#include <iostream>
#include "string"
using namespace std;

void info(string name,int marks){
	cout << "My name is " << name << " and i got "<<marks<<" in 12th.";
	
}

int main(){
	string nam;
	int mark;
	
	cout << "Enter your name ::>> ";
	getline(cin,nam);
	
	cout << "Enter your 12th marks ::>> ";
	cin>>mark;
	
	info(nam,mark);
}
