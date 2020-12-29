// Operating with variable 
#include <iostream>
using namespace std;
// 'cout' was not declared in this scope [closed] ---> link: https://stackoverflow.com/questions/15185801/cout-was-not-declared-in-this-scope

// <iostream> is the usual header

// <iostream.h> is the old header, not longer supported by some compilers

int main(){
	char ch; 
	while ( (ch = cin.get()) !=EOF){
		cout << "ch: " << ch << endl; 
		// endl: end of line 
	}
	
	cout << "\nDone\n"; 
	// terminate the program 
	return 0; 
}
