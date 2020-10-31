//h
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class tic_tac_toe
{
private:
    bool testing = false;
    string player;
    string next_player;
    string winner;

    void set_next_player();
    bool check_board_full();
    void clear_board();
    
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();
public:
    void set_test();
    vector<string> pegs{" ", " ", " ", " ", " ", " ", " ", " ", " "};
    void display_board() const;
    string get_player() const;
    void mark_board(int position);
    void start_game(string first_player);
    bool game_over();

    string get_winner() const;
};
