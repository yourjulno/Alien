//
// Created by sageblatt on 01.04.2022.
//

#ifndef ALIEN_CREATURE_H
#define ALIEN_CREATURE_H

#include <array>
#include <vector>
#include <SFML/Graphics.hpp>

class Creature {
protected:
    double hp;
    std::array <double, 2> coords;
    unsigned strength;
    std::vector <sf::Sprite> sprites;

    virtual void move() = 0;
    virtual void attack() = 0;

public:
    Creature();

    virtual ~Creature();
};


#endif //ALIEN_CREATURE_H
