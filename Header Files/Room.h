#ifndef OBJECT_ORIENTED_PROGRAMMING_CLION_ROOM_H
#define OBJECT_ORIENTED_PROGRAMMING_CLION_ROOM_H

#include <stdio.h>
#include <typeinfo>

using namespace std;

class Room{

public:
    virtual void roomOperation();
    //virtual void monkTurn();
    //virtual void entityTurn();
    virtual void Display();
};

#endif //OBJECT_ORIENTED_PROGRAMMING_CLION_ROOM_H
