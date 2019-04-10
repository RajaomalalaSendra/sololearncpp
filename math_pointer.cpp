#include <iostream>
#include <string>
using namespace std;

int main() {
	int myvar1, myvar2, menu;
	int *pointervar1, *pointervar2;
	pointervar1 = &myvar1;
	pointervar2 = &myvar2;
	while (true) {
		cout << "Enter the first number" << endl;
		cout << "> ";
		cin >> myvar1;
        cout << "Enter the second number" << endl;
        cout << "> ";
		cin >> myvar2;
		cout << "Main Menu \n1.addition\t2.substraction\n3.multiplication\t4.division: " << endl;
		cin >> menu; 
        if (menu == 1 || menu == 2 || menu == 3 || menu == 4) {
        	if(menu == 1) {
                cout << "The addition menu: " << endl;
                cout << "So the addition is: " << *pointervar2 + *pointervar1 << endl;
        		break;
        	} else if (menu == 2) {
                cout << "The substraction menu: " << endl;
                cout << "So the substraction is: " << *pointervar1 - *pointervar2 << endl;
                break;
        	} else if (menu == 3) {
                cout << "The multiplication menu: " << endl;
                cout << "So the multiplication is: " << *pointervar1 * *pointervar2 << endl;
                break;
        	} else {
                cout << "The division menu: " << endl;
                cout << "So the division is: " << *pointervar1 / *pointervar2 << endl;
                break;
        	}
        } else {
        	cout << "Wrong answer for you!!\nSorry for the interuption you must return back to the beginning!!" << endl;
        }
	}
	return 0; 
}
