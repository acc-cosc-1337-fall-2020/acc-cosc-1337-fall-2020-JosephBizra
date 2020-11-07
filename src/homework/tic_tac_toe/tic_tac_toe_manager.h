//h
#ifndef tic_tac_toe_manager_H
#define tic_tac_toe_manager_H
#include<iostream>
#include<string>
#include<vector>
#include "tic_tac_toe.h"
using namespace std;

class tic_tac_toe_manager
{
private:
    vector<tic_tac_toe> games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;

    void update_winner_count(string winner);

public:
    void save_game(const tic_tac_toe b);

    friend ostream& operator<<(ostream &out, const tic_tac_toe_manager &manager);

    void get_winner_total();

};

#endif