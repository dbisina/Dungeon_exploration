#include "../Header Files/TreasureRoom.h"
#include <fstream>
#include <iostream>


//clear screen
//display treasure.txt
//pause
//exit the program or return to menu

void TreasureRoom::roomOperation(){
    system("clear");
    Display();
}

void TreasureRoom::Display(){ //Displays treasure and ends game
  fstream treasureFile;
  treasureFile.open("TreasureRoom.txt", ios::in);
  if(treasureFile.is_open()){
      string line;
      while (getline(treasureFile, line)){
          cout << line << endl;
      }
      treasureFile.close();
  }

}