// Operating with variable 
#include <iostream>
using namespace std;
// 'cout' was not declared in this scope [closed] ---> link: https://stackoverflow.com/questions/15185801/cout-was-not-declared-in-this-scope

// <iostream> is the usual header

// <iostream.h> is the old header, not longer supported by some compilers

int main(){
	char a, b, c; 
	cout << "Enter three letters: "; 
	cin.get(a).get(b).get(c); 
	cout << "a: " << a << "\nb: " << b << "\nc: " << c << endl; 
	
	// terminate the program 
	return 0; 
}
