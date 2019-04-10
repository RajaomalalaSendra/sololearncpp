#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*
    Declaration of the variable
	*/
	unsigned int a[5] = {1,2,4,7,7};
	int b; 
	cout << "Using the pointer in cpp" << endl;
	cout << "first of all we need to get your answer" << endl;
	cout << "enter a number between 0 and 4" << endl;
	cin >> b;
	if (b < 5 && b >= 0) {
		cout << "the answer of that number is: " << a[b] << endl;
	} else {
		cout << "That is a wrong aswer!! So sorry for that." << endl;
	}
	
	return 0;
}