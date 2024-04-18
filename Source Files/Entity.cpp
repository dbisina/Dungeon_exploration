#include "../Header Files/Entity.h"
#include <stdio.h>
#include <iostream>

using namespace std;

int Entity::getHealthPoints(){
    return healthPoints;
}

int Entity::getMaximumHealthPoints(){
    return maximumHealthPoints;
}

int Entity::getAttackPoints(){
    return attackPoints;
}

void Entity::setHealthPoints(int value){
    healthPoints = value;
};

void Entity::setMaximumHealthPoints(int value){
    healthPoints = value;
};

string Entity::getName(){
    return name;
}

void Entity::display(){

}
