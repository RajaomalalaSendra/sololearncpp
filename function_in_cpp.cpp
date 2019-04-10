#include <iostream>
#include <string>
using namespace std;

void myFirstFunction(){
	cout << "I am using here the first function in cpp" << endl; 
}
// This is the function prototype in cpp
void calculusList();
void myself();
// The main function in cpp
int main() {
	/*
    This is the call of the function that we have just created in cpp above
	*/
	string *function = new string;
	cout << "just type 'function' or 'calculus' or 'myself'" << endl;
	cout << "> ";
	cin >> *function;
	if (*function == "function") {
		cout << "Congratulation" << endl;
		myFirstFunction();
	} else if (*function == "calculus"){
		cout << "Congrats!! You have just created the list of calculus!" << endl;
		calculusList();
	} else if (*function == "myself") {
		cout << "This is about myself" << endl;
		myself();
	} else {
		cout << "Sorry for the bad interuption!! See you next time.";
	}
	delete function;
	return 0;
}

void calculusList(){
	cout << "Here are the list of the calculus:\nAddition\tsubstraction\tDivision\tDivision" << endl; 
}
void myself() {
	cout << "Hello my name is Rajaomalala Sendra Andriampanjato.\nI just created this simple apps in cpp." << endl; 
}