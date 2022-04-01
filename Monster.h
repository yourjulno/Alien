//
// Created by sageblatt on 01.04.2022.
//

#ifndef ALIEN_MONSTER_H
#define ALIEN_MONSTER_H

#include "Creature.h"

class Monster: public Creature{
protected:
    void move() override;
    void attack() override;

public:
    Monster();

    ~Monster();
};


#endif //ALIEN_MONSTER_H
