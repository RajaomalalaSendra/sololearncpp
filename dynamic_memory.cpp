#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*
    This is the simple way of using the dynamic memory in cpp
	*/
	int *mypointer = new int;
	int *mysecondpointer = new int;
    int *pointerArray = NULL;
    pointerArray = new int[10];
	// The first number
    cout << "Enter a number " << endl;
    cout << "> ";
    cin >> *mypointer;
    cout << mypointer << endl;
    cout << "That number is: " << *mypointer << endl;
    
    // The second number
    cout << "Enter the second number " << endl;
    cout << "> ";
    cin >> *mypointer;
    cout << mypointer << endl;
    cout << "That number is: " << *mypointer << endl;

    // create the array inside the pointerArray
    pointerArray = {1,2,3,4,5,6,7,8,9};
    cout << "The pointer array: " << *pointerArray << endl;
    delete [] pointerArray;

    // Delete the pointer
    delete mypointer;
    cout << mypointer << endl;
    cout << *mypointer << endl;
	return 0;
}