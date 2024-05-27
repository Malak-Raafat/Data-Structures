#pragma once
#include<iostream>
#include<string>


using namespace std;
using namespace System;

ref class footballer
{
public:
    int ID;

    String^ league;
    String^ team;
    String^ name;
    String^ position;

    int price;
    int points;

    footballer();
    footballer(int ID, String^ league, String^ team, String^ name, String^ position, int price, int points);

    void update_goal_points(int noGoal);
    void update_assist_points(int noAssist);
    void yellow_violation();
    void red_violation();
    void update_price();

};

