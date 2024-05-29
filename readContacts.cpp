#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class contactClass {
    string contactName, mobile;
    public:
    void showContacts();
    void addContact();
};

void contactClass::showContacts() {
    ifstream file("Contactlist.csv", ios::in);  // Use ifstream for reading
    cout << "\t\t Contact List:" << endl;

    if (!file.is_open()) {
        cerr << "Unable to open file!!!" << endl;
        return;
    }

    string line;
    bool filelist = false;
    while (getline(file, line)) {
        size_t pos = line.find(',');
        if (pos != string::npos) {
            contactName = line.substr(0, pos);
            mobile = line.substr(pos + 1);
            cout << "Name: " << contactName << endl;
            cout << "Mobile: " << mobile << endl;
            filelist = true;
        }
    }

    if (!filelist) {
        cout << "No contacts found!" << endl;
    }

    file.close();
}

void contactClass::addContact() {
    cin.ignore();  // Clear input buffer
    cout << "\t\tEnter Contact Name: " << endl;
    getline(cin, contactName);
    cout << "\t\tEnter Mobile Number: " << endl;
    getline(cin, mobile);

    ofstream file("Contactlist.csv", ios::out | ios::app);  // Use ofstream for writing
    if (!file.is_open()) {
        cout << "Unable to create file" << endl;
        return;
    }

    file << contactName << "," << mobile << endl;  // Use comma to separate fields
    file.close();
}

int main() {
    contactClass t;
    int n;
    cout << "Choose one!!!" << endl;
    cout << "1. Show Contacts" << endl;
    cout << "2. Add Contact" << endl;
    cin >> n;

    switch (n) {
        case 1:
            t.showContacts();
            break;
        case 2:
            t.addContact();
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
