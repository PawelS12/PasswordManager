#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

using std::string;
class User {
private:
    string login;
    string password;
public:
    User();
    User(string login, string password);
    string get_login() const;
    string get_password() const;
    void set_password(const string& password);
    void set_login(const string& login);
};

#endif // USER_H