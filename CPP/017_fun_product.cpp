#include <iostream>
using namespace std;

int product(int num1,int num2){
	int num3;
	num3 = num1*num2;
	return num3;
	
}

int main(){
	int num1,num2;
	
	cout << "Enter first number ::>> ";
	cin>>num1;
	
	cout << "Enter second number ::>> ";
	cin>>num2;
	
	cout<<"product of two number is ::>> " <<product(num1,num2);
}
