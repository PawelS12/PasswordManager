#include <iostream>
#include "../include/UserInterface.h"
#include "../include/Password.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

UserInterface::UserInterface() {}

void UserInterface::showMenu() {
    cout << "Password manager: " << endl;
    cout << "1. Add password" << endl;
    cout << "2. Exit" << endl;
}

void UserInterface::handleAddPassword() {
    string site;
    string password;

    cout << "Enter site: ";
    cin >> site;
    cout << "Enter password: ";
    cin >> password;

    Password pass(site, password);
}

void UserInterface::handleMenu() {
    bool is_open = true;

    do {
        showMenu();
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                handleAddPassword();
                break;
            case 2:
                cout << "Exit" << endl;
                is_open = false;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (is_open);
}