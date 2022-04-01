//
// Created by sageblatt on 01.04.2022.
//

#ifndef ALIEN_PLAYER_H
#define ALIEN_PLAYER_H

#include "Creature.h"

class Player: public Creature{
protected:
    void move() override;
    void attack() override;

public:
    Player();

    ~Player();
};


#endif //ALIEN_PLAYER_H
