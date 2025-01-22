#ifndef PASSWORDMANAGER_H
#define PASSWORDMANAGER_H

#include <iostream>
#include <string>
#include <sqlite3.h>

using std::string;

class PasswordManager {
private:
    sqlite3* db;

public:
    PasswordManager(const string& db_name);
    ~PasswordManager();
    sqlite3* getDatabase() const;
};

#endif // PASSWORDMANAGER_H