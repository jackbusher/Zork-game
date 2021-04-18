#include "enemy.h"
#include <string>
#include <iostream>
using namespace std;

enemy::enemy(string enDescription){
    this->description = enDescription;
    enemyhealth = 100;
   enemylevel = 0;
    enemydamage = 25;
}

void enemy::addDamage(int damage) {
    enemyhealth -= damage;
}

string enemy::getDescription(){
    return description;
}

int enemy::getHealth() {
    return enemyhealth;
}

/*void enemy::setDescription(string description) {
    this->description = description;
} */

void enemy::setHealth(int enHealth) {
    enemyhealth = enHealth;
}
