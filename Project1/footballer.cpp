#include "footballer.h"
using namespace std;
using namespace System;


footballer::footballer() {
    this->ID = 0;
    this->league = "";
    this->team = "";
    this->name = "";
    this->position = "";
    this->price = 0;
    this->points = 0;
}

footballer::footballer(int ID, String^ league, String^ team, String^ name, String^ position, int price, int points) {
    this->ID = ID;
    this->league = league;
    this->team = team;
    this->name = name;
    this->position = position;
    this->price = price;
    this->points = points;
}


void footballer::update_price() {
    this->price += this->points * 50;
}

void footballer::update_goal_points(int noGoal) {
    this->points += (4 * noGoal);
    update_price();
}

void footballer::update_assist_points(int noAssist) {
    this->points += (2 * noAssist);
    update_price();
}   
void footballer::yellow_violation() {
    this->points -= 1 ;
    update_price();
}
void footballer::red_violation() {
    this->points -= 3;
    update_price();
}