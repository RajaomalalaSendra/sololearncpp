#include <iostream>
#include <string>
using namespace std;

class BankAccount {
  public:
    void sayHi() {
      cout << "Hi" << endl;
    }
    void myName() {
    	cout << "\033[33mMy name is Sendra" << endl;
    }
};

int main() {
	BankAccount account;
	account.sayHi();
	account.myName();
	return 0;
}