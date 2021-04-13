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
    Room *currentRoom;
    void createRooms();

    bool processCommand(Command command);
    void printHelp();
    void goRoom(Command command);
    void createItems();
    void displayItems();
    //string go(string direction);

public:
    ZorkUL();
    void play();
    string printWelcome();
    string go(string direction);
};



#endif /*ZORKUL_H_*/
