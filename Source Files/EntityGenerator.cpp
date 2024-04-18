#include "../Header Files/EntityGenerator.h"
#include "../Header Files/Goblin.h"
#include "../Header Files/Monk.h"
#include "../Header Files/Entity.h"
#include "../Header Files/NumberGenerator.h"


Entity* EntityGenerator::createEntity(int a){ //Generates Entity
    if (a == 1) {
        return new Goblin();
    }
    else
        return new Goblin();
}

