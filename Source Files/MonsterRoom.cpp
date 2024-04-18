#include "../Header Files/MonsterRoom.h"
#include "../Header Files/NumberGenerator.h"
#include "../Header Files/Mediator.h"
#include "../Header Files/Monk.h"
#include "../Header Files/EntityGenerator.h"
#include "../Header Files/Entity.h"
#include <random>
#include <iostream>
#include <string>
#include <fstream>
//#include <stdlib>

using namespace std;


void MonsterRoom::roomOperation() {

    monsterRoomDisplay();
    NumberGenerator ng;
    Mediator m;
    EntityGenerator eg;
    int a = 0;

    Entity *entity = EntityGenerator::createEntity(a);


    string nextstep;
    int turn = 0;

    do {
        //Monks Turn
        if (turn == 0) {
            monkTurn(entity);
            //Alert user for the next step
            cout << "\nTurn of player: \n";
            cout << "\n Would you like to attack or defend? Attack [1] | Defend [2] \n";
            cin >> nextstep;

            // Monk Attacking
            if (nextstep == "1") {

                if (ng.actionNumberGenerator() == 0) {
                    cout << "\n Attack Successful! \n";
                    m.MonkAttack(entity);
                    turn = 1;
                }

                else {
                    cout << "\nAttack Failed :/ \n";
                    turn = 1;
                }
            }

            else if (nextstep == "2") {

                if (ng.actionNumberGenerator() == 0) {
                    cout << "\nDefence Successful! \n";
                    m.MonkDefend();
                    turn = 1;
                }

                else {
                    cout << "\n Defence Failed! \n";
                    turn = 1;
                }
            }
        }

            //Monster's Turn
        else {

            entityTurn(entity);
            cout << "\nTurn of Monster:\n";
            if (ng.actionNumberGenerator() == 0) {
                if (ng.actionNumberGenerator() == 0) {
                    cout << "Monster Decided to Attack:" << endl;
                    m.EntityAttack(entity);
                    cout << "Attack Successful";
                    turn = 0;
                } else {
                    cout << "Monster Decided to Attack:";
                    cout << "\nMonster Attack Failed\n";
                    turn = 0;
                }
            } else {

                if (ng.actionNumberGenerator() == 0) {
                    cout << "Monster Decided to Defend:" << endl;
                    m.EntityDefend(entity);
                    cout << "Defence Successful";
                    cin.get();
                    turn = 0;
                } else {
                    cout << "Monster Decided to Defend:";
                    cout << "\nMonster Defence Failed!\n";
                    cin.get();
                    turn = 0;
                }
            }
        }

        if (entity->getHealthPoints() <= 0) { //If monster health points are less than or
            // equal to zero then the do while loop will end, with the break seen below.
            break;
        }

    } while (Monk::instance().getHealthPoints() > 0); //Loop will continue while monk health points are greater than zero

    if(entity -> getHealthPoints() <= 0) {
        monkTurn(entity);
        cout << "\n You have defeated the monster :D \n";
    }
    else if (Monk::instance().getHealthPoints() <= 0) {
        entityTurn(entity);
        cout << "\n You were defeated by one of the monsters :/ \n";
    }
}

void MonsterRoom::monsterRoomDisplay() { //Displays monster room art
    fstream monsterRoomFile;
    monsterRoomFile.open("MonsterRoom.txt", ios::in);
    if(monsterRoomFile.is_open()){
        string line;
        while(getline(monsterRoomFile, line)){
            cout << line << endl;
        }
        monsterRoomFile.close();
    }
}

void MonsterRoom::monkTurn(Entity *entity){ //Display attributes for the single instance of Monk
    system("clear");
    Monk::instance().displayMonk();

    cout << "\n\n Player Details: Name: ";
    cout << Monk::instance().getName();
    cout << "\n Player Description: ";
    cout << Monk::instance().getDescription();
    cout << "\n Health Points: ";
    cout << Monk::instance().getHealthPoints();
    cout << "\n Maximum Health Points : ";
    cout << Monk::instance().getMaxHealthPoints();
    cout << " | Attack Points: ";
    cout << Monk::instance().getAttackPoints();
    cout << "\n";
}

void MonsterRoom::entityTurn(Entity *goblin){ //Get attributes for Monster and will display them
    system("clear");
    goblin -> display();

    cout << "\nMonster Attributes: \nName:";
    cout << goblin -> getName();
    cout << "\nHealth Points| ";
    cout << goblin -> getHealthPoints();
    cout << "\nAttack Points: ";
    cout << goblin -> getAttackPoints();
    cout << "\n";
}


