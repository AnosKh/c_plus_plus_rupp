// Operating with variable 
#include <iostream>
using namespace std;
// 'cout' was not declared in this scope [closed] ---> link: https://stackoverflow.com/questions/15185801/cout-was-not-declared-in-this-scope


// <iostream> is the usual header

// <iostream.h> is the old header, not longer supported by some compilers

int main(){
	// declare vairable 
	int num = 3; 
	char ch = 'k'; 
	float rn = -34.22;  
	
	// print out the result
	cout << "Number: " << num << "\n"; 
	cout << "Char: " << ch << "\n"; 
	cout << "Real number: " << rn << "\n"; 
	
	// terminate the program 
	return 0; 
}
