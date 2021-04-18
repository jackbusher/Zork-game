#ifndef ENEMY_H
#define ENEMY_H
#include <string>
using namespace std;

class enemy
{
private:
    string description;
    int enemyhealth = 100;
    int enemylevel = 0;
    int enemydamage;

public:

    void setHealth(int);
    void addHealth(int gain);
    int getHealth();
    void setLevel(int);
    void addDamage(int);

    string getDescription();
    void setDescription();
    enemy();

public:
     enemy(string description);
};

#endif // ENEMY_H
