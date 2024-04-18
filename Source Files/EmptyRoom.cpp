#include "../Header Files/EmptyRoom.h"
#include "../Header Files/Mediator.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <typeinfo>
#include <string>


void EmptyRoom::roomOperation(){
    Display();

    string nextstep;
    Mediator m;

    cout << "\nPray in this room to restore your Health Points\n";
    cout << "\n   [1] Pray\n";
    cout << "\n   [2] Avoid Praying\n";

    cin >> nextstep;

    if (nextstep == "1") {
        m.Pray();
        cout << "\nMaximum amount of Health Points Restored to Monk :D\n";
    }
    cin.get();
}

void EmptyRoom::Display(){
    fstream prayerRoomFile;
    prayerRoomFile.open("EmptyRoom.txt", ios::in);
    if (prayerRoomFile.is_open()){
        string line;
        while (getline(prayerRoomFile, line)){
            cout << line << endl;
        }
        prayerRoomFile.close();
    }
}

void EmptyRoom::Details(){
    cout << "\n Player Details: Name: ";
    cout << Monk::instance().getName();
    cout << "\n Health Points: ";
    cout << Monk::instance().getHealthPoints();
    cout << "\n Maximum Health Points";
    cout << Monk::instance().getMaxHealthPoints();
    cout << " | Attack Points";
    cout << Monk::instance().getAttackPoints();
    cout << "\n";

}