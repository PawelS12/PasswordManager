#include <iostream>
#include "../include/UserInterface.h"
#include "../include/Password.h"
#include "../include/PasswordGenerator.h"
#include "../include/User.h"
#include "../include/LoginManager.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

UserInterface::UserInterface() {}

void UserInterface::show_menu() {
    cout << "Password manager: " << endl;
    cout << "1. Add password" << endl;
    cout << "2. Generate password" << endl;
    cout << "3. Exit" << endl << endl;
}

void UserInterface::handle_add_password() {
    string site;
    string password;

    cout << "Enter site: ";
    cin >> site;
    cout << "Enter password: ";
    cin >> password;

    Password pass(site, password);
}

void UserInterface::handle_generate_password() {
    Password password;
    PasswordGenerator generator;
    generator.create_password(password);
}

void UserInterface::handle_menu() {
    string login, password;
    bool is_open;

    cout << "Login" << endl;
    cout << "Enter your login: ";
    cin >> login;
    cout << "Enter your password: ";
    cin >> password;
    cout << endl;

    User user(login, password);
    LoginManager login_manager(user);
    is_open = login_manager.login(login, password);

    if (is_open == true) {
        do {
            show_menu();
            int choice;
            cout << "Enter your choice: ";
            cin >> choice;

            cout << endl;

            switch (choice) {
                case 1:
                    handle_add_password();
                    break;
                case 2:
                    handle_generate_password();
                    break;
                case 3:
                    cout << "Exit" << endl;
                    is_open = false;
                    break;
                default:
                    cout << "Invalid choice" << endl;
            }
        } while (is_open);
    } else {
        cout << "Access denied." << endl;
    }
}