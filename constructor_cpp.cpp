#include <iostream>
#include <string>
using namespace std;

class myClass {
  private:
    string name;
  public:
    myClass(string nm) {
      cout << "\033[35mHey I am here to dev today??" << endl;
      setName(nm);
    }
    void setName(string x) {
      name = x;
    }
    string getName() {
      return name;
    }
};

int main() {
  myClass myObj("nely");
  myClass myObj2("sendra");
  cout << myObj.getName() << endl;
  cout << myObj2.getName() << endl;
  return 0;
}