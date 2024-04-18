#include <stdio.h>
#include "../Header Files/RoomGenerator.h"
#include "../Header Files/Room.h"
#include "../Header Files/EntityGenerator.h"
#include "../Header Files/Entity.h"
#include "../Header Files/Mediator.h"
#include <stdlib.h>
#include <string>
#include <fstream>
#include <iostream>


void Display()
{
   fstream startFile;
   startFile.open("StartScreen.txt", ios::in);
   if(startFile.is_open()){
       string line;
       while (getline(startFile, line)){
           cout << line << endl;
       }
       startFile.close();
   }
}

void Start(){
    system("clear");
    string name;
    string description;
    cout << "Enter Name: \n";
    cin >> name;
    Monk::instance().setName(name);
    cout << "Monk name has been set to " + Monk::instance().getName() + "\n";

    cout << "Enter Description: \n";
    cin >> description;
    Monk::instance().setDescription(description);
    cout << "Monk description has been set to " + Monk::instance().getDescription() + "\n";

    //Generates the different rooms based upon the room generator class
    Room* numberOne = RoomGenerator::generateRoom(1);
    numberOne -> roomOperation();
    Monk::instance().setMaxHealthPoints(20);
    Room* numberTwo = RoomGenerator::generateRoom(2);
    numberTwo->roomOperation();
    Room* numberThree = RoomGenerator::generateRoom(3);
    numberThree->roomOperation();
    Room* numberFour = RoomGenerator::generateRoom(4);
    numberFour->roomOperation();
    Room* numberFive = RoomGenerator::generateRoom(5);
    numberFive->roomOperation();
};

void Instructions() //Instructions are loaded in from this method
{
    fstream instructionFile;
    instructionFile.open("Instructions.txt", ios::in);
    if(instructionFile.is_open()){
        string line;
        while (getline(instructionFile, line)){
            cout << line << endl;
        }
        instructionFile.close();
    }
    cout << "---------------------------------------------------\n"
            "------------------------------------------------------\n"
            "--------------------------------------------------------\n"
            "----------------------------------------------------------\n";
    Start();
};

void exitGame(){
    system("exit");
}

int main()
{
    system("clear");
    void Display();
    int nextstep;

    cout << "\n _ __ ___   ___ _ __  _   _ \n"
            "| '_ ` _ \\ / _ \\ '_ \\| | | |\n"
            "| | | | | |  __/ | | | |_| |\n"
            "|_| |_| |_|\\___|_| |_|\\__,_|\n"
            "                            \n";

    cout << "------------------------------------\n"
            "-------------------------------------\n"
            "---------------------------------------\n"
            "-----------------------------------------\n";

    cout << "\n[1] Start Game";
    cout << "\n[2] Instructions";
    cout << "\n[3] Exit Game";
    cin >> nextstep;

    switch (nextstep) {
        case 1:
            Display();
            Start();
            break;
        case 2:
            Instructions();
            break;
        case 3:
            exitGame();
            //return 0;
            break;
    }
};

