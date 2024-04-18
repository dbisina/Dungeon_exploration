#include "../Header Files/RoomGenerator.h"
#include "../Header Files/TreasureRoom.h"
#include "../Header Files/MonsterRoom.h"

Room* RoomGenerator::generateRoom(int roomNumber){ //Generates the different rooms when called upon
    if (roomNumber == 1){
        return new MonsterRoom;
    }

    else if (roomNumber == 2){
        return new EmptyRoom();
    }
    else if (roomNumber == 3){
        return new MonsterRoom();
    }
    else if (roomNumber == 4){
        return new TreasureRoom();
    }
}