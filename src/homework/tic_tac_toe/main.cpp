#include<iostream>
#include<string>
#include<vector>
#include "tic_tac_toe.h"

using namespace std;

int main()
{
	tic_tac_toe tic;

	string first_player;
	int position;
	int gameOver = 0;

	cout<<"Enter an X or an O ";
	cin>>first_player;
	cout<<"\n";

	tic.start_game(first_player);

	while (gameOver == 0)
	{

		// Enter positions
		cout<<"Enter a position between 1 and 9: ";
		cin>>position;

		// Mark position
		tic.mark_board(position);
		// Display the board
		tic.display_board();

		// verify game over
		gameOver = tic.game_over();
	}
	
	return 0;
}