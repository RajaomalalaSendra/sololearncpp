#include <iostream>
#include <string>
using namespace std;

void myFirstFunction(){
	cout << "I am using here the first function in cpp" << endl; 
}
int main() {
	/*
    This is the call of the function that we have just created in cpp above
	*/
	string *function = new string;
	cout << "just type 'function'" << endl;
	cout << "> ";
	cin >> *function;
	if (*function == "function") {
		cout << "Congratulation" << endl;
		myFirstFunction();
	} else {
		cout << "Sorry for the bad interuption!! See you next time.";
	}
	return 0;
}