#include "item.h"

Item::Item (string inDescription, int inWeightGrams, float inValue/**, int weaponCheck*/) {
    description = inDescription;
    setWeight(inWeightGrams);
    value = inValue;
    /**weaponCheck(isWeapon);*/
}

Item::Item(string inDescription) {
    description = inDescription;
}


string Item::getShortDescription()
{
    return description;
}

string Item::getLongDescription()
{
    return " item(s), " + description + ".\n";
}

