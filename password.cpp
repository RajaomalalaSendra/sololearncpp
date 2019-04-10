#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*
    This is the code for the getting the password in cpp 
	*/
	char password[120], confirm[120];
    cout << "Enter your password: " << endl;
    cout << "> ";
    cin >> password;
    cout << "Confirm your password: " << endl;
    cout << "> ";
    cin >> confirm;
    if (password == confirm ) {
    	cout << "You can connect now." << endl;
    } else {
    	cout << "Sorry you cannot access for that process.";
    }
	return 0;
}