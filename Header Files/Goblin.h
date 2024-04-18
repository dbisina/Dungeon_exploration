#ifndef OBJECT_ORIENTED_PROGRAMMING_CLION_GOBLIN_H
#define OBJECT_ORIENTED_PROGRAMMING_CLION_GOBLIN_H

#include <stdio.h>
#include <string>
#include "Entity.h"

using namespace std;

class Goblin : public Entity {

private:
    int healthPoints = 10;
    int attackPoints = 2;
    int maxHealthPoints = 10;
    string name = "Goblin";

public:
    void Display();
    string getName();
    int getMaxHealthPoints();
    void setMaxHealthPoints(int value);
    int getHealthPoints();
    void setHealthPoints(int value);
    int getAttackPoints();
};

#endif //OBJECT_ORIENTED_PROGRAMMING_CLION_GOBLIN_H
