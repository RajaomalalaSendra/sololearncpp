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
	cin >> email;
    cout << "Enter The Balance: " << endl;
    arrow();
    cin >> totalBalance;
    cout << endl;
}
void account::show_the_data() {
	cout << "Account Number: " << account_number << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Adress: " << adress << endl;
    cout << "Email: " << email << endl;
    cout << "Current Balance: Rs.  " << totalBalance << endl;
    cout << "-------------------------------" << endl;
}
void account::write_the_record() {
    ofstream outfile;
    outfile.open("record.data", ios::binary|ios::app);
    read_the_data();
    outfile.write(reinterpret_cast<char*>(this), sizeof(*this));
    outfile.close();
}
void account::read_the_record() {
	ifstream infile;
    infile.open("record.data", ios::binary);
    if(!infile)
    {
        cout<<"Error in Opening! File Not Found!!"<<endl;
        return;
    }
    cout<<"\n****Data from The file is here****"<<endl;
    while(!infile.eof())
    {
        if(infile.read(reinterpret_cast<char*>(this), sizeof(*this)))
        {
            show_the_data();
        }
    }
    infile.close();
}
void account::search_the_record() {
	int n;
    ifstream infile;
    infile.open("record.data", ios::binary);
    if(!infile)
    {
        cout << "\nError in opening! File Not Found!!" << endl;
        return;
    }
    infile.seekg(0,ios::end);
    int count = infile.tellg()/sizeof(*this);
    cout << "******" << endl;
    ios::end;
    cout << "The infile.tellg: " << infile.tellg() << endl;
    cout << "The size of this: " << sizeof(*this) << endl;
    cout << "******" << endl;
    cout << "\n There are " << count << " record in the file";
    cout << "\n Enter Record Number to Search: ";
    cin >> n;
    infile.seekg((n-1)*sizeof(*this));
    infile.read(reinterpret_cast<char*>(this), sizeof(*this));
    show_the_data();
}
void account::edit_the_record() {
	int n;
    fstream iofile;
    iofile.open("record.data", ios::in|ios::binary);
    if(!iofile)
    {
        cout<<"\nError in opening! File Not Found!!"<<endl;
        return;
    }
    iofile.seekg(0, ios::end);
    int count = iofile.tellg()/sizeof(*this);
    cout<<"\n There are "<<count<<" record in the file";
    cout<<"\n Enter Record Number to edit: ";
    cin>>n;
    iofile.seekg((n-1)*sizeof(*this));
    iofile.read(reinterpret_cast<char*>(this), sizeof(*this));
    cout<<"Record "<<n<<" has following data"<<endl;
    show_the_data();
    iofile.close();
    iofile.open("record.data", ios::out|ios::in|ios::binary);
    iofile.seekp((n-1)*sizeof(*this));
    cout<<"\nEnter data to Modify "<<endl;
    read_the_data();
    iofile.write(reinterpret_cast<char*>(this), sizeof(*this)); 
}
void account::delete_the_record() {
	int n;
    ifstream infile;
    infile.open("record.data", ios::binary);
    if(!infile)
    {
        cout<<"\nError in opening! File Not Found!!"<<endl;
        return;
    }
    infile.seekg(0,ios::end);
    int count = infile.tellg()/sizeof(*this);
    cout<<"\n There are "<<count<<" record in the file";
    cout<<"\n Enter Record Number to Delete: ";
    cin>>n;
    fstream tmpfile;
    tmpfile.open("tmpfile.data", ios::out|ios::binary);
    infile.seekg(0);
    for(int i=0; i<count; i++)
    {
        infile.read(reinterpret_cast<char*>(this),sizeof(*this));
        if(i==(n-1))
            continue;
        tmpfile.write(reinterpret_cast<char*>(this), sizeof(*this));
    }
    infile.close();
    tmpfile.close();
    remove("record.data");
    rename("tmpfile.data", "record.data");
}
int main() {
	/*
    The code is going over here
	*/
	account Account;
	int *choose = new int;
    
    // renive the record.data if it exists
    ifstream deletefile;
    deletefile.open("record.data", ios::binary);
    if(deletefile)
    {
         remove("record.data");
    }
    deletefile.close();


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