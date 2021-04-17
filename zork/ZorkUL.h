#ifndef ZORKUL_H_
#define ZORKUL_H_

#include "Command.h"
#include "Parser.h"
#include "Room.h"
#include "item.h"
#include <iostream>
#include <string>
using namespace std;

class ZorkUL {
private:
    Parser parser;

    void createRooms();

    bool processCommand(Command command);
    void printHelp();
    void goRoom(Command command);
    void createItems();
    void displayItems();
    //string go(string direction);

public:
    ZorkUL();
        Room *currentRoom;
    void play();
    string printWelcome();
    string go(string direction);
    string viewItems();
};



#endif /*ZORKUL_H_*/
