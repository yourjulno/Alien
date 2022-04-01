//
// Created by sageblatt on 01.04.2022.
//

#ifndef ALIEN_MENU_H
#define ALIEN_MENU_H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <vector>


class Menu {
protected:
    std::vector <sf::Sprite> textures;
    sf::Sound music;
    unsigned long score;

    virtual void nextWindow() = 0;

public:
    Menu();
    virtual void run() = 0;
    virtual ~Menu();
};


#endif //ALIEN_MENU_H
