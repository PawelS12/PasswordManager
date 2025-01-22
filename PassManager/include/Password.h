#ifndef PASSWORD_H
#define PASSWORD_H

#include <iostream>

using std::string;

class Password {
private:
    string site;
    string password;
    time_t created;
public:
    Password();
    Password(string site, string password);
    time_t get_creation_time() const;
    string get_site() const;
    string get_password() const;
    void set_password(const string& password); 
    void show_password() const;
};

#endif // PASSWORD_H