#include <iostream>
#include "../include/LoginManager.h"
#include "../include/User.h"
#include <string>

using std::cout;
using std::endl;

LoginManager::LoginManager(const User& user) { }

bool LoginManager::login(const string& login, const string& password) {
    if (login == "admin" && password == "admin") {
        cout << "Login successful." << endl << endl;
        return true;
    } else {
        cout << "Login failed." << endl << endl;
        return false;
    }
}