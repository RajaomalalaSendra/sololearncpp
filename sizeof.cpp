#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*
    This is the program we gonna learn for today concren about the size of in cpp
	*/
	cout << "char: " << sizeof(char) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    double array[10];
    cout << "the array double: " << sizeof(array) << endl;
    int var = 50;
    cout << "var: " << sizeof(var) << endl;
    int *size = new int[20];
    cout << "I want to know the size of the number: " << endl;
    cout << "> ";
    cin >> *size;
    cout << "It's lenght is: " << sizeof(*size) << endl;
    delete size;
	return 0;
}