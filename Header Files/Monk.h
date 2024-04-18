#ifndef OBJECT_ORIENTED_PROGRAMMING_CLION_MONK_H
#define OBJECT_ORIENTED_PROGRAMMING_CLION_MONK_H

#include <stdio.h>
#include <string>
#include "Entity.h"

using namespace std;

class Monk : public Entity{

public:
    static Monk& instance();
    string getName();
    void setName(string nameValue);
    string getDescription();
    void setDescription(string descriptionValue);
    int getHealthPoints();
    void setHealthPoints(int monkHealth);
    int getMaxHealthPoints();
    void setMaxHealthPoints(int monkMaxHealthValue);
    int getAttackPoints();
    void setAttackPoints(int monkAttackPoints);
    void displayMonk();

private:
    Monk();
    Monk(Monk const&);
    string monkName;
    string monkDescription;
    int maxHealthPoints = 15;
    int attackPoints = 3;
    int healthPoints = 15;
};


#endif //OBJECT_ORIENTED_PROGRAMMING_CLION_MONK_H
