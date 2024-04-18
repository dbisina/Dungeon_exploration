#include "../Header Files/Goblin.h"

#include <fstream>
#include <string>
using namespace std;

string Goblin::getName(){
    return name;
}

int Goblin::getHealthPoints(){
    return healthPoints;
}

int Goblin::getMaxHealthPoints(){
    return healthPoints;
}

int Goblin::getAttackPoints(){
    return attackPoints;
}

void Goblin::setHealthPoints(int value){
    healthPoints = value;
};

void Goblin::setMaxHealthPoints(int value){
    healthPoints = value;
};




