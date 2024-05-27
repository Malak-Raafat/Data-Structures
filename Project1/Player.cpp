#include "Player.h"
#include"footballer.h"

using namespace std;
using namespace System;


Player::Player() {
    this->player_id = 0;
    this->budget = 0;
    this->player_total_points = 0;
    this->player_name = "";
    this->password = "";
    this->myteampanel = false;
    this->signedin = false;
    mykeeper = gcnew footballer(0, "", "", "", "", 0, 0);
    mydef1 = gcnew footballer(0, "", "", "", "", 0, 0);
    mydef2 = gcnew footballer(0, "", "", "", "", 0, 0);
    mydef3 = gcnew footballer(0, "", "", "", "", 0, 0);
    mymid1 = gcnew footballer(0, "", "", "", "", 0, 0);
    mymid2 = gcnew footballer(0, "", "", "", "", 0, 0);
    mymid3 = gcnew footballer(0, "", "", "", "", 0, 0);
    mymid4 = gcnew footballer(0, "", "", "", "", 0, 0);
    mymid5 = gcnew footballer(0, "", "", "", "", 0, 0);
    myfor1 = gcnew footballer(0, "", "", "", "", 0, 0);
    myfor2 = gcnew footballer(0, "", "", "", "", 0, 0);
}


Player::Player(int player_id, int budget, int player_total_points, String^ player_name, String^ password) {
    this->player_id = player_id;
    this->budget = budget;
    this->player_total_points = player_total_points;
    this->player_name = player_name;
    this->password = password;
    this->myteampanel = false;
    this->signedin = false;

    mykeeper = gcnew footballer(0, "", "", "", "", 0, 0);
    mydef1 = gcnew footballer(0, "", "", "", "", 0, 0);
    mydef2 = gcnew footballer(0, "", "", "", "", 0, 0);
    mydef3 = gcnew footballer(0, "", "", "", "", 0, 0);
    mymid1 = gcnew footballer(0, "", "", "", "", 0, 0);
    mymid2 = gcnew footballer(0, "", "", "", "", 0, 0);
    mymid3 = gcnew footballer(0, "", "", "", "", 0, 0);
    mymid4 = gcnew footballer(0, "", "", "", "", 0, 0);
    mymid5 = gcnew footballer(0, "", "", "", "", 0, 0);
    myfor1 = gcnew footballer(0, "", "", "", "", 0, 0);
    myfor2 = gcnew footballer(0, "", "", "", "", 0, 0);
    this->signedin = false;
}

void Player::update_Ppoints() {
    this->player_total_points = mykeeper->points + mydef1->points + mydef2->points + mydef3->points + mymid1->points + mymid2->points 
        + mymid3->points + mymid4->points + mymid5->points + myfor1->points + myfor2->points;
}

//footballer price
void Player::total_price(int playerPrice) {
    this->budget -= playerPrice;
}


bool Player::checkBudget(int total) {
    if (this->budget < 0) {
        return false;
    }
    else {
        return true;
    }
}
