#include <iostream>
#include <string>
using namespace std;

void myFunc(int x) {
  x = 100;
}
void myFunction(int *y){
	*y = 100;
}
int main() {
  int var = 20;
  int myvar = 30;
  cout << "Pass by value" << endl;
  myFunc(myvar);
  cout << "Pass by reference" << endl;
  myFunction(&var);
  cout << var;
}
// Outputs 20