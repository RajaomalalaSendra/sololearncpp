#include <iostream>
using namespace std;

void function(int a) {
   cout << "Integer number: "<< a << endl;
}
void function(float a) {
	cout << "Float number: "<< a << endl;
}

int main(int argc, char const *argv[])
{
	/*
    float and integer number in cpp
	*/
    int a;
    float v;
    cout << "Enter an integer number: " << endl;
    cout << "> ";
    cin >> a;
    function(a);
    cout << "Enter a float number: " << endl;
    cout << "> ";
    cin >> v;
    function(v);
	return 0;
}
