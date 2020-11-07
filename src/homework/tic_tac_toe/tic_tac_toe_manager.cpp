//cpp
#include<iostream>
#include<string>
#include<vector>
// #include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
using namespace std;

void tic_tac_toe_manager::update_winner_count(string winner)
{
    if (winner == "x")
    {
        x_win++;
    }
    else if (winner == "o")
    {
        o_win++;
    }
    else
    {
        ties++;
    }
}

void tic_tac_toe_manager::save_game(const tic_tac_toe b)
{
    games.push_back(b);
    
    string winner = b.get_winner();
    cout<<"savegame() winner = "<< winner << endl;

    update_winner_count(winner);
}

void tic_tac_toe_manager::get_winner_total()
{
    cout << "X wins: " << x_win << "||" << "O wins: " << o_win << "||" << "Ties: " << ties << "\n";
    // string winner;
    // if (x > o && x > t)
    // {
    //     winner = "x";
    // }
    // else if (o > x && o > t)
    // {
    //     winner = "o";
    // }
    // else
    // {
    //     winner = "t";
    // }
}

ostream& operator<<(ostream &out, const tic_tac_toe_manager &manager)
{
    int size = manager.games.size();
    for (auto i = 0; i < size; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            out <<"|"<<manager.games[i].pegs[j]<<"|";

            if (((j+1)%3) == 0 )
            {
                out<<"\n";
            }
        }
        cout<<"\n";
    }

    return out;
}