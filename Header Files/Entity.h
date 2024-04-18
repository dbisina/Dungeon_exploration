#ifndef OBJECT_ORIENTED_PROGRAMMING_CLION_ENTITY_H
#define OBJECT_ORIENTED_PROGRAMMING_CLION_ENTITY_H

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Entity {

public:
    //Polymorphism will be used here
    virtual void display();
    virtual int getHealthPoints();
    virtual string getName();
    virtual void setHealthPoints(int value);
    virtual int getAttackPoints();
    virtual void setMaximumHealthPoints(int value);
    virtual int getMaximumHealthPoints();

private:
    string name;
    int attackPoints;
    int healthPoints;
    int maximumHealthPoints;
};


#endif //OBJECT_ORIENTED_PROGRAMMING_CLION_ENTITY_H
