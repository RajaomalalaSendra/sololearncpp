#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*
    Declaration of the variable
	*/
	unsigned int a[5] = {1,2,4,7,7};
	int score[2][3] = {{1,2,2},{1,3,2}};
	int b, e, f; 
	int *mypointer;
	double *mydoublepointer;
	char *mycharpointer[9];
	float *myfloatpointer;
	int abc = 1;
	int anotherabc = 1;
	int *anotherpointer, *anotherpointerabc;
	mypointer = &abc;
	anotherpointer = mypointer;
	anotherpointerabc = &anotherabc;

	cout << "Using the pointer in cpp" << endl;
	cout << "first of all we need to get your answer" << endl;
	cout << "enter a number between 0 and 4" << endl;
	cin >> b;
	if (b < 5 && b >= 0) {
		cout << "the answer of that number is: " << a[b] << endl;
		cout << "The pointer of b is: " << &b << "\tThe pointer of a is: " << &a << endl;
	} else {
		cout << "That is a wrong aswer!! So sorry for that." << endl;
		cout << "The pointer of b is: " << &b << endl;
	}
	cout << "Enter the row that is between 0 or 1: " << endl;
    cin >> e;
    cout << "Enter the column of that which is between 0 and 2: " << endl;
    cin >> f;
    if (e == 0 || e == 1 && f >= 0 && f < 3 ) {
        cout << "Your answer is: " << score[e][f] << endl;
        cout << "It's pointer is: "<< &score[e][f] << endl;	
    } else {
    	cout << "That is a wrong answer for all of that we expected!!" << endl;
    }
	cout << "<mypointer>: " << mypointer << endl;
	cout << "THe value of the mypointer is: " << *mypointer << endl;
	cout << "<anotherpointer>: " << anotherpointer << endl;
	cout << "THe value of the anotherpointer is: " << *anotherpointer << endl;
	cout << "<anotherpointerabc>: " << anotherpointerabc << endl;
	cout << "THe value of the anotherpointerabc is: " << *anotherpointerabc << endl;
	cout << "<mydoublepointer>: " << mydoublepointer << endl;
	cout << "<mycharpointer>: " << mycharpointer << endl;
	cout << "<myfloatpointer>: " << myfloatpointer << endl;
	return 0;
}