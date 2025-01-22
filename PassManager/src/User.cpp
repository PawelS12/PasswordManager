#include <iostream>
#include <string>
#include "../include/User.h"

User::User() {}
User::User(string login, string password) {
    this->login = login;
    this->password = password;
}

string User::get_login() const { return login; }
string User::get_password() const { return password; };
void User::set_password(const string& password) { this->password = password; }
void User::set_login(const string& login) { this->login = login; }