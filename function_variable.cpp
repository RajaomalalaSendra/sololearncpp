#include <iostream>
#include <string>
#include <math.h>
using namespace std;

// sum of number in one  function in cpp
void func(int x, int y){
 	cout << "sum of " << x << " and " << y << " is " << x + y << endl;
 }

int power(int x) {
    return x * 2;
}
int main()
 {
 	/* code */
 	func(6, 5);
 	// The power of 2
 	cout << "The number is: " << power(2);
 	return 0;
 } 

