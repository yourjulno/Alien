//
// Created by sageblatt on 01.04.2022.
//

#ifndef ALIEN_GAMEMENU_H
#define ALIEN_GAMEMENU_H

#include "Menu.h"
#include "Planet.h"

class GameMenu: public Menu{
protected:
    std::array <Planet, 4> planets;
    void nextWindow() override; //choosePlanet

public:
    GameMenu();
    void run() override;
    ~GameMenu();
};


#endif //ALIEN_GAMEMENU_H
