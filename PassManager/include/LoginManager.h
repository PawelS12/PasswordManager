#ifndef LOGINMANAGER_H
#define LOGINMANAGER_H

#include <iostream>
#include <string>
#include "../include/User.h"

using std::string;

class LoginManager {
public:
    LoginManager(const User& user);
    bool login(const string& login, const string& password);
};

#endif // LOGINMANAGER_H