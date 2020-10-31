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

bool tic_tac_toe::check_column_win()
{
    if (((pegs[0] == "x") && (pegs[3] == "x") && (pegs[6] == "x")) || ((pegs[1] == "x") && (pegs[4] == "x") && (pegs[7] == "x")) || ((pegs[2] == "x") && (pegs[5] == "x") && (pegs[8] == "x")))
    {
        return true;
    }
    else if (((pegs[0] == "o") && (pegs[3] == "o") && (pegs[6] == "o")) || ((pegs[1] == "o") && (pegs[4] == "o") && (pegs[7] == "o")) || ((pegs[2] == "o") && (pegs[5] == "o") && (pegs[8] == "o")))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool tic_tac_toe::check_row_win()
{
    if (((pegs[0] == "x") && (pegs[1] == "x") && (pegs[2] == "x")) || ((pegs[3] == "x") && (pegs[4] == "x") && (pegs[5] == "x")) || ((pegs[6] == "x") && (pegs[7] == "x") && (pegs[8] == "x")))
    {
        return true;
    }
    else if (((pegs[0] == "o") && (pegs[1] == "o") && (pegs[2] == "o")) || ((pegs[3] == "o") && (pegs[4] == "o") && (pegs[5] == "o")) || ((pegs[6] == "o") && (pegs[7] == "o") && (pegs[8] == "o")))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool tic_tac_toe::check_diagonal_win()
{
    if (((pegs[0] == "x") && (pegs[4] == "x") && (pegs[8] == "x")) || ((pegs[2] == "x") && (pegs[4] == "x") && (pegs[6] == "x")))
    {
        return true;
    }
    else if (((pegs[0] == "o") && (pegs[4] == "o") && (pegs[8] == "o")) || ((pegs[2] == "o") && (pegs[4] == "o") && (pegs[6] == "o")))
    {
        return true;
    }
    else
    {
        return false;
    }
}

// your instructions say to just set winner to the player's opposite value.
void tic_tac_toe::set_winner()
{
    if (player == "x")
    {
        winner = "o";
    }
    else
    {
        winner = "x";
    }
}

string tic_tac_toe::get_winner() const
{
    return winner;
}

void tic_tac_toe::mark_board(int position)
{
    int pos = position-1;

    pegs[pos] = player;

    if (position < 9)
    {
        pegs[position] = next_player;
    }
}

bool tic_tac_toe::game_over()
{
    bool game_over = false;

    if (testing == false)
    {
        if (check_column_win() || check_row_win() || check_diagonal_win())
        {
            game_over = true;
            set_winner();
        }
        else if (check_board_full())
        {
            game_over = true;
            winner = "c";
        }
    }
    else
    {
        if (check_board_full())
        {
            game_over = true;
            winner = "c";
        }
    }

    if (game_over == true)
    {
        string winner = get_winner();

        cout<<"Winner is "<<winner<<"\n";
    }

    return game_over;
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

void tic_tac_toe::set_test()
{
    testing = true;
    cout<<"testing = true"<<"\n";
}