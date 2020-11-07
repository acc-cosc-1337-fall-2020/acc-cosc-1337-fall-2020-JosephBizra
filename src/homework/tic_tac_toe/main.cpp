#include<iostream>
#include<string>
#include<vector>
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using namespace std;

// int main()
// {
// 	char ans;
// 	cout<<"press any key except e to start ";
// 	cin>>ans;

// 	while (ans != 'e')
// 	{
// 		tic_tac_toe tic;

// 		string first_player;
// 		int position;
// 		int gameOver = 0;

// 		cout<<"Enter an X or an O ";
// 		cin>>first_player;

// 		while ((first_player != "x") && (first_player != "o"))
// 		{
// 			cout<<"Please enter a valid input. X or an O ";
// 			cin>>first_player;
// 		}
		
// 		cout<<"\n";

// 		tic.start_game(first_player);

// 		while (gameOver == 0)
// 		{
// 			// Enter positions
// 			cout<<"Enter a position between 1 and 9: ";
// 			cin>>position;

// 			// Mark position
// 			tic.mark_board(position);
// 			// Display the board
// 			tic.display_board();

// 			// verify game over
// 			gameOver = tic.game_over();
// 		}
	
// 		cout<<"Press any key to try again or e to quit. ";
// 		cin>>ans;
// 	}
	
// 	return 0;
// }

int main()
{
	char ans;
	cout<<"press any key except e to start ";
	cin>>ans;
	tic_tac_toe_manager man;	

	while (ans != 'e')
	{
		tic_tac_toe tic;


		string first_player;
		int gameOver = 0;

		cout<<"Enter an X or an O ";
		cin>>first_player;

		while ((first_player != "x") && (first_player != "o"))
		{
			cout<<"Please enter a valid input. X or an O ";
			cin>>first_player;
		}
	
		cout<<"\n";

		tic.start_game(first_player);

		while (gameOver == 0)
		{
			// Enter positions
			cin>>tic;

			// Display the board
			cout<<tic;

			// verify game over
			gameOver = tic.game_over();
		}

		man.save_game(tic);
		man.get_winner_total();

		cout<<"Press any key to try again or e to quit. ";
		cin>>ans;
	}

	cout<<man;

	return 0;
}