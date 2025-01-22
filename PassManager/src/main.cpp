#include <iostream>
#include "../include/UserInterface.h"
#include "../include/PasswordManager.h"
#include "../include/DatabaseException.h"

using std::cout;
using std::cerr;
using std::endl;

int main() {
    try {
        PasswordManager manager("../PassManager/database/PassManager.db");

        UserInterface menu;
        menu.handle_menu();

    } catch (const DatabaseException& e) {

        cerr << "Failed to open library manager: " << e.what() << endl;
        
    }

    return 0;
}