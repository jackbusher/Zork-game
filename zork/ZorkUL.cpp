#include <iostream>
#include <string>

using namespace std;
#include "ZorkUL.h"


ZorkUL::ZorkUL() {
    createRooms();
}

void ZorkUL::createRooms()  {
    Room *a, *b, *c, *d, *e, *f, *g, *h, *i, *j, *k, *l;

    a = new Room("a");
        a->addItem(new Item("sword", 1, 11));        
        a->setDescription("A");
    b = new Room("b");
        b->addItem(new Item("axe", 2, 22));
        b->setDescription("B");
    c = new Room("c");
        c->addItem(new Item("bow", 2, 22));
        c->setDescription("C");
    d = new Room("d");
    d->setDescription("D");
    e = new Room("e");
    e->setDescription("E");
    f = new Room("f");
    f->setDescription("F");
        f->addItem(new Item("armour" ,1,1));
    g = new Room("g");
    g->setDescription("G");
        g->addItem(new Item("wand", 1, 1));        
    h = new Room("h");
    h->setDescription("H");
    i = new Room("i");
    i->setDescription("I");
    j = new Room("j");
    j->setDescription("J");
    k = new Room("k");
    k->setDescription("K");
    l = new Room("L");
    l->setDescription("L");

//             (N, E, S, W)
    a->setExits(b, NULL, NULL, NULL);
    b->setExits(NULL, c, NULL, j);
    c->setExits(d, NULL, NULL, b);
    d->setExits(e, NULL, c, NULL);
    e->setExits(NULL, NULL, d, f);
    f->setExits(k, e, g, h);
    g->setExits(f, NULL, NULL, NULL);
    h->setExits(NULL, f, i, NULL);
    i->setExits(h,NULL, j, NULL);
    j->setExits(i, b, NULL, NULL);
    k->setExits(l, NULL, NULL, NULL);
    l->setExits(NULL,NULL,NULL,NULL);



        currentRoom = a;
}



string ZorkUL::go(string direction) {
    Room* nextRoom = currentRoom->nextRoom(direction);
    if (nextRoom == NULL)
        return("direction null");
    else
    {
        currentRoom = nextRoom;
        return currentRoom->longDescription();
    }
}

string ZorkUL::viewItems() {

    return currentRoom->displayItem();
}





