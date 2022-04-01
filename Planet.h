//
// Created by sageblatt on 01.04.2022.
//

#ifndef ALIEN_PLANET_H
#define ALIEN_PLANET_H

#include <SFML/Graphics.hpp>
#include <vector>
#include "Player.h"
#include "Monster.h"

class Planet {
private:
    std::vector <sf::Sprite> textures;
    Player player;
    std::vector <Monster> monsters;

public:
    Planet();

    void run();

    ~Planet();
};


#endif //ALIEN_PLANET_H
