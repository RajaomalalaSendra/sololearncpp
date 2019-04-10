#include <iostream>
#include <fstream>
#include <stdlib>
#include <string>
using namespace std;

// creation of the class account
class acount {
private:
	char acount_number[20];
	char firstName[20];
	char lastName[20];
	string adress;
	string email; 
	float totalBalance;
public:
	void read_the_data();
	void show_the_data();
	void write_the_data();
	void read_the_record();
	void search_the_record();
	void edit_the_record();
	void delete_the_record();
}

void account::read_the_data() {
	cout << "this is the reading of the data" << endl;
}
void account::show_the_data() {
	cout << "this is the showing  ofthe data" << endl;
}
void account::write_the_data{
    cout
}
int main() {
	/*
    The code is going over here
	*/

}