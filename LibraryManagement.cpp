#include <iostream>
#include <fstream>
using namespace std;

class Library {
    string id, name, author;
    fstream file;

public:
    void addBook();
    void showAll();
    void extract();
};

void Library::addBook() {
    cin.ignore(); // Clear the input buffer
    cout << "\nEnter book Id: ";
    getline(cin, id);
    cout << "\nEnter book Name: ";
    getline(cin, name);
    cout << "\nEnter Author: ";
    getline(cin, author);

    file.open("bookData.txt", ios::out | ios::app);
    if (!file) {
        cerr << "Error opening file for writing." << endl;
        return;
    }
    file << id << "*" << name << "*" << author << endl;
    file.close();
}

void Library::showAll() {
    file.open("bookData.txt", ios::in);
    if (!file) {
        cerr << "Error opening file for reading." << endl;
        return;
    }
    cout << "\n\n\t\tBook Id\t\t\tBook Name\t\t\tAuthor Name" << endl;

    while (getline(file, id, '*')) {
        getline(file, name, '*');
        getline(file, author, '\n');
        cout << "\t\t" << id << "\t\t\t" << name << "\t\t\t" << author << endl;
    }
    file.close();
}

void Library::extract() {
    string search;
    cout << "Enter Book Id: ";
    cin.ignore(); // Clear the input buffer before taking the search input
    getline(cin, search);

    file.open("bookData.txt", ios::in);
    if (!file) {
        cerr << "Error opening file for reading." << endl;
        return;
    }

    bool found = false;
    while (getline(file, id, '*')) {
        getline(file, name, '*');
        getline(file, author, '\n');
        if (search == id) {
            cout << "\n\n\t\tBook Id\t\t\tBook Name\t\t\tAuthor Name" << endl;
            cout << "\t\t" << id << "\t\t\t" << name << "\t\t\t" << author << endl;
            cout << "Book extracted successfully!!!!" << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Book with Id " << search << " not found." << endl;
    }

    file.close();
}

int main() {
    Library lib;
    int choice;

    while (true) {
        cout << "---------------------------------------------------" << endl;
        cout << "\t\t1. Add Books" << endl;
        cout << "\t\t2. Extract books" << endl;
        cout << "\t\t3. Show all books" << endl;
        cout << "\t\t4. Exit" << endl;
        cout << "----------------------------------------------------" << endl;
        cout << "\t\tEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            lib.addBook();
            break;
        case 2:
            lib.extract();
            break;
        case 3:
            lib.showAll();
            break;
        case 4:
            cout << "\t\tThanks for visiting!" << endl;
            return 0;
        default:
            cout << "\t\tInvalid choice. Please try again." << endl;
            break;
        }
    }
    return 0;
}
