#ifndef USERINTERFACE_H
#define USERINTERFACE_H

class UserInterface {
public:
    UserInterface();
    void show_menu();
    void handle_menu();
    void handle_add_password();
    void handle_generate_password();
};

#endif // USERINTERFACE_H