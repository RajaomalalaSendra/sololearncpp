#include <iostream>
#include <cstdlib>
#include <ctime>
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

    cout << "Using the seed random in cpp." << endl;
    srand(98);
    for (int x = 1; x <= 10; x++) {
        cout << 1 + (rand() % 6) << endl;
    }
    cout << "Random using the time in cpp." << endl;
    srand(time(0));
    for (int x = 1; x <= 10; x++) {
        cout << 1 + (rand() % 100) << endl;
    }
	return 0;
}