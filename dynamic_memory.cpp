#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*
    This is the simple way of using the dynamic memory in cpp
	*/
	int *mypointer = new int;
    cout << "Enter a number " << endl;
    cout << "> ";
    cin >> *mypointer;
    cout << "That number is: " << *mypointer << endl;
	return 0;
}