#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main(){
	int fn;
	int sn;
	int sum;
	int difference;
	int product;
	int quotient;
	char operation;
	
	cout << "Welcome to my calculator! \n" << endl;
	cout << "Enter operation to use : [+][-][*][/]" <<endl;
	cout << "Press + for addition" <<endl;
	cout << "Press - for substraction" <<endl;
	cout << "Press * for multiplication" <<endl;
	cout << "Press / for division" <<endl;
	cin >> operation;
	
	
	
	switch(operation){
		case '+':
			cout << "Addition is on process.." << endl;
			cout << "Enter your first number : " <<endl; cin >> fn; 
			cout << "Enter your second number : " <<endl; cin >> sn;
			sum = fn + sn;
			cout << "The sum is :" <<endl; cout <<sum <<endl ;
		break;
			case '-':
			cout << "Substraction is on process.." << endl;
			cout << "Enter your first number : " <<endl; cin >> fn; 
			cout << "Enter your second number : " <<endl; cin >> sn;
			sum = fn - sn;
			cout << "The difference is :" <<endl; cout <<sum <<endl ;
		break;
			case '*':
			cout << "Multiplication is on process.." << endl;
			cout << "Enter your first number : " <<endl; cin >> fn; 
			cout << "Enter your second number : " <<endl; cin >> sn;
			sum = fn * sn;
			cout << "The product is :" <<endl; cout <<sum <<endl ;
		break;
			case '/':
			cout << "Division is on process.." << endl;
			cout << "Enter your first number : " <<endl; cin >> fn; 
			cout << "Enter your second number : " <<endl; cin >> sn;
			sum = fn / sn;
			cout << "The quotient is :" <<endl; cout <<sum <<endl ;
		break;
	}
	
	return 0;
}