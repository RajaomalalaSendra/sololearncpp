#include <iostream>
#include <string>
using namespace std;

class myClass {
  public:
    string name;
    string surname;
};

class myAnotherClass {
  public:
    void setName(string x) {
      name = x;
    }
    string getName() {
    	return name;
    }
  private:
    string name;
};


int main() {
  // creation of the object
  myClass myObj;
  myAnotherClass myAnotherObj;
  // the variable inside the object
  myAnotherObj.setName("Sendra");
  myObj.name = "SoloLearn";
  myObj.surname = "The CPP";
  cout << myObj.name << " " << myObj.surname << endl;
  cout << myAnotherObj.getName() << endl;
  return 0;
}