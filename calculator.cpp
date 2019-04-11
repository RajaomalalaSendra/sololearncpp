#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

class calculus {
private:
	int x, y, sum;
    float fsum;
public:
	void ent();
	int add();
	int sub();
	int mul();
	int div();
	int res();
};
void calculus::ent() {
	cout << "Enter x: " << endl;
	cout << "> ";
    cin >> x;
    cout << "Enter y: " << endl;
    cout << "> ";
    cin >> y;
}	
int calculus::add() {
    ent();
    sum = x + y;
    cout << sum << endl;
}
int calculus::sub() {
    ent();
    sum = x - y;
    cout << sum << endl;
}
int calculus::mul() {
    ent();
	sum = x * y;
    cout << sum << endl;
}
int calculus::div() {
    ent();
    fsum = x / y;
    cout << fsum << endl;	
}
int calculus::res() {
    ent();
	sum = x % y;
    cout << sum << endl;
}
int main() {
    /*
    This is the simple way of using the calculus for this apps;
    */
    calculus Calc;
    int *choice = new int;
    cout << "Welcome to the Calc Apps" << endl;
    while(true){
        cout << "=====================\nChoose the menu below\n=====================\n";
        cout << "1.Add\t2.Sub\t3.Mul\n4.Div\t5.Res\t6.Quit" << endl;
        cout << "> ";
        cin >> *choice;
        switch(*choice){
            //to get the addition
        	case 1:
    	        Calc.add();
    	        break;
        	//to get the substraction
            case 2:
    	        Calc.sub();
    	        break;
        	//to get the multiplication
            case 3:
    	        Calc.mul();
    	        break;
            //to get the division
            case 4:
                Calc.div();
    	        break;
            //to get the rest
            case 5:
    	        Calc.res();
    	        break;
        	//To exit the apps
            case 6:
                cout << "Thanks for using the apps!!See you soon :-)!!" << endl;
        	    exit(0);
        	    break;     	

            // The rest of it
            default:
        	    cout << "Wrong number!! Return back again to the main menu!!!" << endl;
        }
    }
    delete(choice);
    return 0;
}