#ifndef ASSIGN2_MENU_H
#define ASSIGN2_MENU_H
#include <map>
#include "Players.h"

class Menu {
public:

    Menu();
    Menu(Menu& other);
    ~Menu();

    void mainMenu();

    void newGameMenu();

    void loadGameMenu();

    void creditsMenu();

private:
    int userMenuInput;
    std::string playerName;
    std::string playerName2;
    std::string fileName;

protected:

    std::map<int, std::string> menuMap;


};

#endif // ASSIGN2_MENU_H