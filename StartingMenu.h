//
// Created by sageblatt on 01.04.2022.
//

#ifndef ALIEN_STARTINGMENU_H
#define ALIEN_STARTINGMENU_H

#include "Menu.h"


class StartingMenu: public Menu {
protected:
    void nextWindow() override;

public:
    StartingMenu();
    void run() override;
    ~StartingMenu();
};


#endif //ALIEN_STARTINGMENU_H
