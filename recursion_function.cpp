#include <iostream>
#include <string>
using namespace std;


int factorial(int n) {
  if (n==1) {
    return 1;
  }
  else {
    return n * factorial(n-1);
  }
}

int main()
{
	/*
    Our code is overhere
	*/
	int *number = new int;
	cout <<  "Enter a number to be stored in the factorial: "<< endl;
    cout << ":: ";
    cin >> *number;
	cout << "The factorial of " << *number << " is " << factorial(*number);
	return 0;
}