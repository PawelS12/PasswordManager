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
    Password(string site, string password);
    time_t getCreationTime() const;
    string getSite() const;
    string getPassword() const;
};

#endif // PASSWORD_H