#ifndef ROOM_H_
#define ROOM_H_

#include <map>
#include <string>
#include <vector>
#include "item.h"
#include "enemy.h"
using namespace std;
using std::vector;

class Room {

private:

    map<string, Room*> exits;
    string exitString();
    vector <Item> itemsInRoom;
    vector <enemy>enemiesInRoom;


public:
    void setDescription(string description);
    string description;
    int numberOfItems();
    int numberOfEnemies();
    Room(string description);
    void setExits(Room *north, Room *east, Room *south, Room *west);
    string shortDescription();
    string longDescription();
    Room* nextRoom(string direction);
    void addItem(Item *inItem);
    void addEnemy(enemy *inEnemies);
    string displayItem();
    string displayEnemy();
    int isItemInRoom(string inString);
    void removeItemFromRoom(int location);
    void removeEnemy();
    void removeItem();


};

#endif
