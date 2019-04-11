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
	cout << "The factorial of 12 is: " << endl;
	factorial(12);
	return 0;
}