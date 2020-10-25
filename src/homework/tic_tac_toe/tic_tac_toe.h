//h
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class tic_tac_toe
{
private:
    string player;
    string next_player;

    void set_next_player();
    bool check_board_full();
    void clear_board();
public:
    vector<string> pegs{" ", " ", " ", " ", " ", " ", " ", " ", " "};
    void display_board() const;
    string get_player() const;
    void mark_board(int position);
    void start_game(string first_player);
    bool game_over();
};
