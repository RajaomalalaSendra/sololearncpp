#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

// this is the arrow function:
void arrow() {
	cout << "> ";
}

// creation of the class account
class account {
private:
	char account_number[20];
	char firstName[20];
	char lastName[20];
	string adress;
	string email; 
	float totalBalance;
public:
	void read_the_data();
	void show_the_data();
	void write_the_record();
	void read_the_record();
	void search_the_record();
	void edit_the_record();
	void delete_the_record();
};

void account::read_the_data() {
	// the account and the name of the person
	cout << "Enter The Account Number: " << endl;
	arrow();
	cin >> account_number;
	cout << "Enter The First Name: " << endl;
	arrow();
	cin >> firstName;
    cout << "Enter The Last Name: " << endl;
    arrow();
    cin >> lastName;

    // the account and the adress. email and the balance
    cout << "Enter The Adress: " << endl;
	arrow();
	cin >> adress;
	cout << "Enter The Email: " << endl;
	arrow();
	cin >> firstName;
    cout << "Enter The Balance: " << endl;
    arrow();
    cin >> totalBalance;
    cout << endl;
}
void account::show_the_data() {
	cout << "this is the showing  ofthe data" << endl;
}
void account::write_the_record() {
    ofstream outfile;
    outfile.open("record.bank", ios::binary|ios::app);
    read_the_data();
    outfile.write(reinterpret_cast<char *>(this), sizeof(*this));
    outfile.close();
}
void account::read_the_record() {
	cout << "this is the reading of the record in cpp." << endl;
}
void account::search_the_record() {
	cout << "this is the searching of the record in cpp." << endl;
}
void account::edit_the_record() {
	cout << "this is the editing of  the record in cpp." << endl; 
}
void account::delete_the_record() {
	cout << "this is the deleting of the record in cpp." << endl;
}
int main() {
	/*
    The code is going over here
	*/
	account Account;
	int *choose = new int;
    
    // this is the enter to the account information
	cout << "** Get Access to the information System in Our bank **" << endl;
	while (true) {
		cout << "Select the menu below." << endl;
		cout << "\t1-->Add record to file";
        cout << "\n\t2-->Show record from file";
        cout << "\n\t3-->Search Record from file";
        cout << "\n\t4-->Update Record";
        cout << "\n\t5-->Delete Record";
        cout << "\n\t6-->Quit";
        cout << "\nEnter your choice: " << endl;
        cout << "> ";
        cin >> *choose;
        switch(*choose) 
        {
        case 1:
            Account.write_the_record();
            break;
        case 2:
            Account.read_the_record();
            break;
        case 3:
            Account.search_the_record();
            break;
        case 4:
            Account.edit_the_record();
            break;
        case 5:
            Account.delete_the_record();
            break;
        case 6:
            exit(0);
            break;
        default:
            cout << "\nEnter the best and the correct choice for you." << endl;
            exit(0);
        }
	}
	system("pause");
	return 0;
}