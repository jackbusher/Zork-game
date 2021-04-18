#ifndef CHARACTER_H_
#define CHARACTER_H_
#include "ZorkUL.h"

#include <string>
using namespace std;
#include <vector>
using std::vector;


class Character {
private:
     string description;
     vector < string > itemsInCharacter;     
     int health = 100;
     int level = 0;

public:
    void addItems(string Item);

    void setHealth(int);
    int getHealth();

    void setLevel(int);
    int getLevel();

    void addItem(Item item);
    void addItem(string description);
    void addItem(Item &item);

    void dropItem(Item item);

public:
    Character(string description);
    string shortDescription();
    string longDescription();
    };

#endif CHARACTER_H_
