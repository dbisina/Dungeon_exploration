#ifndef OBJECT_ORIENTED_PROGRAMMING_CLION_MONSTERROOM_H
#define OBJECT_ORIENTED_PROGRAMMING_CLION_MONSTERROOM_H

#include <stdio.h>
#include "NumberGenerator.h"
#include "Mediator.h"
#include "Monk.h"
#include "Room.h"
#include "EntityGenerator.h"
#include <random>
#include <iostream>
#include <string>

class MonsterRoom : public Room{

public:

    void roomOperation();

    static void monkTurn(Entity* entity);

    static void entityTurn(Entity* entity);

    void monsterRoomDisplay();
};

#endif //OBJECT_ORIENTED_PROGRAMMING_CLION_MONSTERROOM_H
