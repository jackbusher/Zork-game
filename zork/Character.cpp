#include "Character.h"

Character::Character(string description) {
    this->description = description;
    itemsInCharacter.empty();
}

void Character::addItem(Item &item) {


}

void Character::setHealth(int health){
    this->health = health;
}

int Character::getHealth(){
    return health;
}

void Character::setLevel(int level){
    this->level = level;
}
int Character::getLevel(){
   return level;
}
void Character::dropItem(Item){
 if(itemsInCharacter.size() != itemsInCharacter.empty()){
     itemsInCharacter.empty();
     std::cout << "You dropped your weapon! Go find anoter one before your caught lacking...";
 }

}

string Character::longDescription()
{
  string ret = this->description;

  // ret += "\t"+ (*i).getLongDescription() + "\n";
  return ret;
}
