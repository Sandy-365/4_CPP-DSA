#include <iostream>
using namespace std;

void max(int num1,int num2,int num3){
	if(num1>num2 && num1>num3){
		cout<<"max value is ::>> "<<num1;
	}
	else if(num2>num1 && num2>num3){
		cout<<"max value is ::>> "<<num2;
	}
	else if(num3>num1 && num3>num2){
		cout<<"max value is ::>> "<<num3;
	}
	else{
		cout<<"Values are same";
	}
}

void min(int num1,int num2, int num3){
	if(num1<num2 && num1<num3){
		cout<<"min value is ::>> "<<num1;
	}
	else if(num2<num1 && num2<num3){
		cout<<"min value is ::>> "<<num2;
	}
	else if(num3<num1 && num3<num2){
		cout<<"min value is ::>> "<<num3;
	}
	else{
		cout<<"Values are same";
	}
}

int main(){
	
	int num1,num2,num3;
	
	cout<<"Enter the first number ::>> ";
	cin>>num1;
	
	cout<<"Enter the second number ::>> ";
	cin>>num2;
	
	cout<<"Enter the third number ::>> ";
	cin>>num3;
	
	max(num1,num2,num3);
	cout<<endl;
	min(num1,num2,num3);
}
