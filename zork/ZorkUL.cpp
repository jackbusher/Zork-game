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
        a->addItem(new Item("bow", 2, 22));
        a->addItem(new Item("axe", 2, 22));
    b = new Room("b");
    c = new Room("c");
    d = new Room("d");
    e = new Room("e");
    f = new Room("f");
    g = new Room("g");
        g->addItem(new Item("wand", 1, 1));
        g->addItem(new Item("armour" ,1,1));
    h = new Room("h");
    i = new Room("i");
    j = new Room("j");
    k = new Room("k");
    l = new Room("l");

//             (N, E, S, W)
    a->setExits(b, NULL, NULL, NULL);
    b->setExits(NULL, c, NULL, j);
    c->setExits(d, NULL, NULL, b);
    d->setExits(e, NULL, c, NULL);
    e->setExits(NULL, f, d, NULL);
    f->setExits(k, e, g, h);
    g->setExits(f, NULL, NULL, f);
    h->setExits(NULL, f, i, NULL);
    i->setExits(h,NULL, j, NULL);
    j->setExits(i, NULL, NULL, b);
    k->setExits(l, NULL, NULL, NULL);
    l->setExits(NULL,NULL,NULL,NULL);



        currentRoom = a;
}

void ZorkUL::goRoom(Command command) {
    if (!command.hasSecondWord()) {
        cout << "incomplete input"<< endl;
        return;
    }
}
