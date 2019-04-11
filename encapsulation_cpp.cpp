#include <iostream>
#include <string>
using namespace std;

class myClass {
  public:
    string name;
    string surname;
};

int main() {
  myClass myObj;
  myObj.name = "SoloLearn";
  myObj.surname = "The CPP";
  cout << myObj.name << " " << myObj.surname << endl;
  return 0;
}
