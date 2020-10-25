#include<iostream>
#include<string>
#include<vector>
#include "tic_tac_toe.h"
using namespace std;

void tic_tac_toe::clear_board()
{
    for (int i = 0; i < pegs.size(); i++)
    {
        pegs[i] = " ";
    }
}

void tic_tac_toe::start_game(string first_player)
{
    void clear_board();
    player = first_player;
    set_next_player();
}

void tic_tac_toe::display_board() const
{
    for (int i = 0; i < 9; i++)
    {
        cout<<"|"<<pegs[i]<<"|";

        if (((i+1)%3) == 0 )
        {
            cout<<"\n";
        }
    }
}

bool tic_tac_toe::check_board_full()
{
    bool full = true;

    for (int i = 0; i < 9; i++)
    {
        if (pegs[i] == " ")
        {
            full = false;
        }
    }
    return full;
}

void tic_tac_toe::mark_board(int position)
{
    int pos = position-1;

    if (position%2 != 0)
    {
        pegs[pos] = player;
    }
    else
    {
        pegs[pos] = next_player;
    }
}

bool tic_tac_toe::game_over()
{
    return check_board_full();
}

void tic_tac_toe::set_next_player()
{
    if (player == "x")
    {
        next_player = "o";
    }
    else
    {
        next_player = "x";
    }
}

string tic_tac_toe::get_player() const
{
    return player;
}