#include <iostream>
#include "../include/Password.h"
#include "../include/UserInterface.h"
#include "../include/PasswordGenerator.h"

using std::cout;
using std::cerr;
using std::endl;

int main() {
    try {
        UserInterface menu;
        menu.handle_menu();

    } catch (const std::exception& e) {
        cerr << e.what() << endl;
    }

    return 0;
}