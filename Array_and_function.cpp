#include <iostream>
#include <string>
using namespace std;
// The first array and function in cpp
void printArray(int arr[], int size) {
  for(int x=0; x<size; x++) {
    cout << "You know this: " << arr[x] << endl;
  }
}

int main()
{
	/* code */
	int myArr[3]= {42, 33, 88};
    printArray(myArr, 3);
	return 0;
}