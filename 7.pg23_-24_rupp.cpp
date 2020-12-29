// Operating with variable 
#include <iostream>
using namespace std;
// 'cout' was not declared in this scope [closed] ---> link: https://stackoverflow.com/questions/15185801/cout-was-not-declared-in-this-scope

// <iostream> is the usual header

// <iostream.h> is the old header, not longer supported by some compilers

int main(){
	// Create two char arrays, each with 80 elements 
	const int SIZE = 80; 
	
	// More about const
	// The const keyword specifies that a variable's value is constant and tells the compiler to prevent the programmer from modifying it.
	
	char b1[SIZE];
	char b2[SIZE];
	
	// use cin to input characters into b1 
	cout << "Enter a sentence: " << "\n"; 
	cin >> b1; 
	
	// display b 1 contents 
	cout<< "\nThe string read with cin was: " << "\n" << b1 << "\n\n"; 
	
	// use cin.get to input characters into b2 
	cin.get(b2, SIZE); 
	
	// display buffer2 contents 
	cout << "The string read with cin.get was: " << "\n" << b2 << "\n"; 
	
	// terminate the program 
	return 0; 
}
