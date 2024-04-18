#ifndef OBJECT_ORIENTED_PROGRAMMING_CLION_EMPTYROOM_H
#define OBJECT_ORIENTED_PROGRAMMING_CLION_EMPTYROOM_H

#include <stdio.h>
#include <string>
#include "Entity.h"
#include "Room.h"


class EmptyRoom : public Room {

public:

    void roomOperation();
    void pray();
    void Display();
    void Details();
};

#endif //OBJECT_ORIENTED_PROGRAMMING_CLION_EMPTYROOM_H
