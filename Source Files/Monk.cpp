#include "../Header Files/Monk.h"
#include "../Header Files/Entity.h"
#include <fstream>

using namespace std;

Monk::Monk() {

}

Monk& Monk::instance() {
    static Monk instance;
    return instance;
}

void Monk::displayMonk(){

}

//Getters
string Monk::getName(){
    return monkName;
}

string Monk::getDescription(){
    return monkDescription;
}

int Monk::getHealthPoints(){
    return healthPoints;
}

int Monk::getMaxHealthPoints(){
    return maxHealthPoints;
}

int Monk::getAttackPoints(){
    return attackPoints;
}

//Setters

void Monk::setName(string nameValue){
    monkName = nameValue;
}

void Monk::setDescription(string descriptionValue){
    monkDescription = descriptionValue;
}

void Monk::setHealthPoints(int monkHealth){
    healthPoints = monkHealth;
}

void Monk::setAttackPoints(int monkAttackPoints){
    attackPoints = monkAttackPoints;
}

void Monk::setMaxHealthPoints(int monkMaxHealthValue){
    maxHealthPoints = monkMaxHealthValue;
}

