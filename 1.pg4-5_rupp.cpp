// Operating with variable 
#include <iostream>
using namespace std;
// 'cout' was not declared in this scope [closed] ---> link: https://stackoverflow.com/questions/15185801/cout-was-not-declared-in-this-scope


// <iostream> is the usual header

// <iostream.h> is the old header, not longer supported by some compilers

int main(){
	// declare vairable 
	int a, b;
	int results; 
	
	// process: 
	a = 5; 
	b = 2; 
	a = a + 1; 
	results = a - b; 
	
	// print out the result
	cout << results; 
	
	// terminate the program 
	return 0; 
}
