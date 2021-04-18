#ifndef ENEMY_H
#define ENEMY_H
#include <string>
using namespace std;

class enemy
{
private:
    string desc;
    int eHealth;
    int eDamage;

public:

    void setHealth(int health);
    int getHealth();
    void setLevel(int level);
    int getLevel();
    void setDamage(int damage);
    int getDamage();
    string getDescription();
    void setDescription();
    void addEnemy();
    enemy();

public:
     enemy(string description);
     enemy(string description,int eHealth, int eDamage);
};

#endif // ENEMY_H
