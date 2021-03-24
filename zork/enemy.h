#ifndef __Enemy__
#define __Enemy__


#include "Room.h"


using namespace std;

class Enemy
{
public:
    Enemy(string name, string description, Room* room);
    ~Enemy();

    void SetStats(string name);

};
#endif
