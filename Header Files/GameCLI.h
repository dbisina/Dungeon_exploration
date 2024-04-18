#ifndef OBJECT_ORIENTED_PROGRAMMING_CLION_GAMECLI_H
#define OBJECT_ORIENTED_PROGRAMMING_CLION_GAMECLI_H

#include <stdio.h>
#include "RoomGenerator.h"
#include "Room.h"
#include "EntityGenerator.h"
#include "Entity.h"
#include "Mediator.h"
#include <fstream>
#include <iostream>

using namespace std;

class GameCLI{

public:

    //Constructor

    GameCLI();

    //Destructor

    ~GameCLI();

public:

    void Display();

    void Menu();

    void Start();

    void Instructions();

    int nextstep();

    void exitGame();

};




#endif //OBJECT_ORIENTED_PROGRAMMING_CLION_GAMECLI_H
