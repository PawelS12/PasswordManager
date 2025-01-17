#include <iostream>
#include "../include/Password.h"

using std::string;

Password::Password(string site, string password) : site(site), password(password) { created = time(0); }

time_t Password::getCreationTime() const { return created; }
string Password::getSite() const { return site; }
string Password::getPassword() const { return password; }