// Operating with variable 
#include <iostream>
using namespace std;
// 'cout' was not declared in this scope [closed] ---> link: https://stackoverflow.com/questions/15185801/cout-was-not-declared-in-this-scope


// <iostream> is the usual header

// <iostream.h> is the old header, not longer supported by some compilers

int main(){
	// declare vairable 
	int workDays; 
	float workHours, payRate, weeklyPay; 
	workDays = 7; 
	workHours = 7.5; 
	payRate = 38.55; 
	weeklyPay = workDays * workHours * payRate;  
	
	// print out the result
	cout << "Weekly Pay = US$ "; 
	cout << weeklyPay; 
	cout << '\n'; 
	
	// terminate the program 
	return 0; 
}
