#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	/* code */
	cout << "This is the random number in cpp." << endl;
	for (int x = 1; x <= 10; x++) {
        cout << rand() << endl;
    }
    cout << "This is the second random in cpp." << endl;
    for (int x = 1; x <= 10; x++) {
      cout << 1 + (rand() % 10) << endl;
    }
	return 0;
}