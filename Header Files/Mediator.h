#ifndef OBJECT_ORIENTED_PROGRAMMING_CLION_MEDIATOR_H
#define OBJECT_ORIENTED_PROGRAMMING_CLION_MEDIATOR_H

#include <stdio.h>
#include <string>
#include "MonsterRoom.h"
#include "Monk.h"
#include "Goblin.h"
#include "EmptyRoom.h"
#include "TreasureRoom.h"
#include "Entity.h"


class Mediator

{

public:
    void Pray();
    void MonkAttack(Entity *entity);
    void MonkDefend();
    void EntityDefend(Entity *entity);
    void EntityAttack(Entity *entity);

};

#endif //OBJECT_ORIENTED_PROGRAMMING_CLION_MEDIATOR_H
