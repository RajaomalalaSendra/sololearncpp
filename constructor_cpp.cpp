#include <iostream>
#include <string>
using namespace std;

class myClass {
  private:
    string name;
  public:
    myClass() {
      cout << "\033[35mHey I am here to dev today??" << endl;
    }
    void setName(string x) {
      name = x;
    }
    string getName() {
      return name;
    }
};

int main() {
  myClass myObj;

  return 0;
}