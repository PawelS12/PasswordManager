#include <iostream>
#include "../include/Password.h"
#include "../include/UserInterface.h"

using std::cout;
using std::cerr;
using std::endl;

int main() {
    try {
        UserInterface menu;
        menu.handleMenu();
    } catch (const std::exception& e) {
        cerr << e.what() << endl;
    }

    return 0;
}