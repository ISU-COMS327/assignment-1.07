#include <iostream>
#include "monster_template.h"

using namespace std;

string MonsterTemplate::getName() {
    return name;
}

void MonsterTemplate::setName(string n) {
    name = n;
}

string MonsterTemplate::getDescription() {
    return description;
}

void MonsterTemplate::setDescription(string d) {
    description = d;
}

vector<string> MonsterTemplate::getColors() {
    return colors;
}

void MonsterTemplate::setColors(vector<string> c) {
    colors = c;
}

char MonsterTemplate::getSymbol() {
    return symbol;
}

void MonsterTemplate::setSymbol(char c) {
    symbol = c;
}

numeric_t MonsterTemplate::getSpeed() {
    return speed;
}

void MonsterTemplate::setSpeed(numeric_t s) {
    speed = s;
}

vector<string> MonsterTemplate::getAbilities() {
    return abilities;
}

void MonsterTemplate::setAbilities(vector<string> a) {
    abilities = a;
}

numeric_t MonsterTemplate::getHitpoints() {
    return hitpoints;
}

void MonsterTemplate::setHitpoints(numeric_t h) {
    hitpoints = h;
}

numeric_t MonsterTemplate::getAttackDamage() {
    return attack_damage;
}


void MonsterTemplate::setAttackDamage(numeric_t a) {
    attack_damage = a;
}
/*
        string name;
        string description;
        string color;
        numeric_t speed;
        vector<string> abilities;
        numeric_t hitpoints;
        numeric_t attack_damage;
*/

bool MonsterTemplate::isValid() {
    return !name.empty() && !description.empty() && colors.size() > 0 && speed.base >= 0 && speed.dice >= 0\
          && speed.sides >= 0 && abilities.size() > 0 && hitpoints.base >= 0\
          && hitpoints.dice >= 0 && hitpoints.sides >= 0 &&\
          attack_damage.base >= 0 && attack_damage.sides >= 0 && attack_damage.dice >= 0 \
          && symbol;
}

MonsterTemplate::MonsterTemplate() {
    name = "";
    description = "";
    colors.empty();
    speed.base = -1;
    speed.dice = -1;
    speed.sides = -1;
    abilities.empty();
    hitpoints.base = -1;
    hitpoints.dice = -1;
    hitpoints.sides = -1;
    attack_damage.base = -1;
    attack_damage.dice = -1;
    attack_damage.sides = -1;
}
