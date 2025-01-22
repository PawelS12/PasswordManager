#include <iostream>
#include "../include/Password.h"

using std::string;
using std::endl;

Password::Password(string site, string password) : site(site), password(password) { created = time(0); }
Password::Password() {}

time_t Password::get_creation_time() const { return created; }
string Password::get_site() const { return site; }
string Password::get_password() const { return password; }
void Password::set_password(const string& password) { this->password = password; }

void Password::show_password() const {
    std::cout << "Password: " << password << endl << endl;
}