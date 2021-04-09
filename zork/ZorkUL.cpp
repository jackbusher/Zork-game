#include <iostream>
#include <string>

using namespace std;
#include "ZorkUL.h"

int main(int argc, char argv[]) {
	ZorkUL temp;
	temp.play();
	return 0;
}

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

/**
 *  Main play routine.  Loops until end of play.
 */
string ZorkUL::printWelcome() {
    return "Welcome to Zork";
}

	// Enter the main command loop.  Here we repeatedly read commands and
	// execute them until the ZorkUL game is over.

	bool finished = false;
	while (!finished) {
		// Create pointer to command and give it a command.
		Command* command = parser.getCommand();
		// Pass dereferenced command and check for end of game.
		finished = processCommand(*command);
		// Free the memory allocated by "parser.getCommand()"
		//   with ("return new Command(...)")
		delete command;
	}
	cout << endl;
	cout << "end" << endl;
}

void ZorkUL::printWelcome() {
	cout << "start"<< endl;
	cout << "info for help"<< endl;
	cout << endl;
	cout << currentRoom->longDescription() << endl;
}

/**
 * Given a command, process (that is: execute) the command.
 * If this command ends the ZorkUL game, true is returned, otherwise false is
 * returned.
 */
bool ZorkUL::processCommand(Command command) {
	if (command.isUnknown()) {
		cout << "invalid input"<< endl;
		return false;
	}

	string commandWord = command.getCommandWord();
	if (commandWord.compare("info") == 0)
		printHelp();

	else if (commandWord.compare("map") == 0)
		{
        cout << "        [l]        " << endl;
        cout << "         |         " << endl;
        cout << "         |         " << endl;
        cout << "        [k]        " << endl;
        cout << "         |         " << endl;
        cout << "         |         " << endl;
        cout << "[h]-----[f]-----[e]" << endl;
        cout << " |       |       | " << endl;
        cout << " |       |       | " << endl;
        cout << "[i]     [g]     [d]" << endl;
        cout << " |               | " << endl;
        cout << " |               | " << endl;
        cout << "[j]-----[b]-----[c]" << endl;
        cout << "         |         " << endl;
        cout << "         |         " << endl;
        cout << "        [a]        " << endl;
		}

	else if (commandWord.compare("go") == 0)
		goRoom(command);

    else if(commandWord.compare("equip-armour") == 0)
        cout << "Armour equipped! You increased your armour level by 10" << endl;

    else if (commandWord.compare("take") == 0)
    {
       	if (!command.hasSecondWord()) {
		cout << "incomplete input"<< endl;
        }
        else
         if (command.hasSecondWord()) {
        cout << "you're trying to take " + command.getSecondWord() << endl;
        int location = currentRoom->isItemInRoom(command.getSecondWord());
        if (location  < 0 )
            cout << "item is not in room" << endl;
        else
            cout << "item is in room" << endl;
            cout << "index number " << + location << endl;
            cout << endl;
            cout << currentRoom->longDescription() << endl;
        }
    }

    else if (commandWord.compare("put") == 0)
    {

    }
    /*
    {
    if (!command.hasSecondWord()) {
		cout << "incomplete input"<< endl;
        }
        else
            if (command.hasSecondWord()) {
            cout << "you're adding " + command.getSecondWord() << endl;
            itemsInRoom.push_Back;
        }
    }
*/
    else if (commandWord.compare("quit") == 0) {
		if (command.hasSecondWord())
			cout << "overdefined input"<< endl;
		else
			return true; /**signal to quit*/
	}
	return false;
}
/** COMMANDS **/
void ZorkUL::printHelp() {
	cout << "valid inputs are; " << endl;
	parser.showCommands();

}

void ZorkUL::goRoom(Command command) {
	if (!command.hasSecondWord()) {
		cout << "incomplete input"<< endl;
		return;
	}

	string direction = command.getSecondWord();

	// Try to leave current room.
	Room* nextRoom = currentRoom->nextRoom(direction);

	if (nextRoom == NULL)
		cout << "underdefined input"<< endl;
	else {
		currentRoom = nextRoom;
		cout << currentRoom->longDescription() << endl;
	}
}

string ZorkUL::go(string direction) {
	//Make the direction lowercase
	//transform(direction.begin(), direction.end(), direction.begin(),:: tolower);
	//Move to the next room
	Room* nextRoom = currentRoom->nextRoom(direction);
	if (nextRoom == NULL)
		return("direction null");
	else
	{
		currentRoom = nextRoom;
		return currentRoom->longDescription();
	}
}
