// Operating with variable 
#include <iostream>
using namespace std;
// 'cout' was not declared in this scope [closed] ---> link: https://stackoverflow.com/questions/15185801/cout-was-not-declared-in-this-scope

// <iostream> is the usual header

// <iostream.h> is the old header, not longer supported by some compilers

int main(){
	// declare vairable 
	int a, b, sum, sub, mul, div, div1; 
	cout << "Enter any two numbers:\n";
	cout << "a: "; 
	cin >> a; 
	cout << "b: "; 
	cin >> b; 
	sum = a + b; 
	sub = a -b; 
	mul = a * b;
	div = a / b; 
	div1 = a % b; 
	
	cout << "-------------------***Sum, Sub, Mul Div & Div(%)***-------------------\n"; 
	cout << "Sum(a+b)= " << sum << "\n"; 
//	cout << "-------------------***Sub***-------------------\n"; 
	cout << "Sub(a-b)= " << sub << "\n"; 
//	cout << "-------------------***Mul***-------------------\n"; 
	cout << "Mul(a*b)= " << mul << "\n"; 
//	cout << "-------------------***Div***-------------------\n"; 
	cout << "Div(a/b)= " << div << "\n"; 
//	cout << "-------------------***Div(%)***-------------------\n"; 
	cout << "Div%(a%b)= " << div1 << "\n"; 
	
	
	// terminate the program 
	return 0; 
}
