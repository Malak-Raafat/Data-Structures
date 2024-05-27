#pragma once
#include<iostream>
#include<string>
#include"footballer.h"
#include <unordered_map>


using namespace std;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

ref class Player
{
public:


    int player_id;
    int budget;
    int budget_before_replace;
    int player_total_points;
    String^ player_name;
    String^ password;

    bool signedin = false;
    bool myteampanel = false;
    //my team

    footballer^ mykeeper;
    footballer^ mydef1;
    footballer^ mydef2;
    footballer^ mydef3;
    footballer^ mymid1;
    footballer^ mymid2;
    footballer^ mymid3;
    footballer^ mymid4;
    footballer^ mymid5;
    footballer^ myfor1;
    footballer^ myfor2;

   
    Player(int player_id, int budget, int player_total_points, String^ player_name, String^ password);
    Player();

    bool checkBudget(int total);

    void total_price(int playerPrice);



    //void GetTop3();
    void update_Ppoints();
};

