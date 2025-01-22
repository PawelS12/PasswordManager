#include <iostream>
#include <string>
#include <sqlite3.h>
#include <filesystem>
#include "../include/PasswordManager.h"
#include "../include/DatabaseException.h"

using std::string;
using namespace std::filesystem;

PasswordManager::PasswordManager(const string& db_name) {
    path db_path(db_name);
    path directory = db_path.parent_path();
    
    if (!exists(directory)) {
        create_directories(directory);
    }

    int exit = sqlite3_open(db_name.c_str(), &db);

    if (exit) {
        throw DatabaseException("Error open data base: " + string(sqlite3_errmsg(db)));
    }

    string sql = "CREATE TABLE IF NOT EXISTS USER ("
             "ID INTEGER PRIMARY KEY AUTOINCREMENT, "
             "LOGIN TEXT NOT NULL CHECK(LENGTH(LOGIN) <= 15), "
             "PASSWORD TEXT NOT NULL CHECK(LENGTH(PASSWORD) >= 8)"
             ");";

    char* message_error;
    exit = sqlite3_exec(db, sql.c_str(), NULL, 0, &message_error);

    if (exit != SQLITE_OK) {
        string error_msg = "Error create table (user): " + string(message_error);
        sqlite3_free(message_error);
        throw DatabaseException(error_msg);
    }   
}

PasswordManager::~PasswordManager() {
    sqlite3_close(db);
}

sqlite3* PasswordManager::getDatabase() const {
    return db; 
}