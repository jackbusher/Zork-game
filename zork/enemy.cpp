#include "enemy.h"
#include <string>
#include <iostream>
using namespace std;

enemy::enemy(string enDescription, int health, int damage){
    desc = enDescription;
  setHealth(health);
  eDamage = damage;

}
enemy::enemy(string enDescription){
    desc = enDescription;
}

void enemy::setHealth(int health) {

      eHealth = health;
}

void enemy::setDamage(int damage){
    eDamage = damage;
}

string enemy::getDescription(){
    return desc;
}
