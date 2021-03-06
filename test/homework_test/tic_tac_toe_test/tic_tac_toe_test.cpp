#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("First player set to X") {
	tic_tac_toe tic;
	tic.start_game("x");
	REQUIRE(tic.get_player() == "x");
}

TEST_CASE("First player set to O") {
	tic_tac_toe tic;
	tic.start_game("o");
	REQUIRE(tic.get_player() == "o");
}

TEST_CASE("Test game over if 9 slots are selected") {
	tic_tac_toe tic;
	tic.set_test();
	tic.start_game("x");

	int pos1 = 1;
	tic.mark_board(pos1);
	REQUIRE(tic.game_over() == false);

	int pos2 = 2;
	REQUIRE(tic.pegs[pos2-1] == "o");

	int pos3 = 3;
	tic.mark_board(pos3);
	REQUIRE(tic.game_over() == false);

	int pos4 = 4;
	REQUIRE(tic.pegs[pos4-1] == "o");

	int pos5 = 5;
	tic.mark_board(pos5);
	REQUIRE(tic.game_over() == false);

	int pos6 = 6;
	REQUIRE(tic.pegs[pos6-1] == "o");

	int pos7 = 7;
	tic.mark_board(pos7);
	REQUIRE(tic.game_over() == false);

	int pos8 = 8;
	REQUIRE(tic.pegs[pos8-1] == "o");

	int pos9 = 9;
	tic.mark_board(pos9);
	REQUIRE(tic.pegs[pos9-1] == "x");

	tic.game_over();
	string winner = tic.get_winner();
	REQUIRE(tic.game_over() == true);
	REQUIRE(winner == "c");
}

// Your instructions for test cases were unclear. 
// So I just verified winner in an assertion like it said to.
TEST_CASE("Test win by first column") {
	tic_tac_toe tic;
	tic.start_game("x");
	tic.mark_board(1);
	tic.mark_board(4);
	tic.mark_board(7);

	REQUIRE(tic.game_over() == true);

	tic.game_over();
	REQUIRE(tic.get_winner() == "o");
}
TEST_CASE("Test win by second column") {
	tic_tac_toe tic;
	tic.start_game("x");
	tic.mark_board(2);
	tic.mark_board(5);
	tic.mark_board(8);

	REQUIRE(tic.game_over() == true);
}
TEST_CASE("Test win by third column") {
	tic_tac_toe tic;
	tic.start_game("x");
	tic.mark_board(3);
	tic.mark_board(6);
	tic.mark_board(9);

	REQUIRE(tic.game_over() == true);
}

TEST_CASE("Test win by first row") {
	tic_tac_toe tic;
	tic.start_game("x");
	tic.mark_board(1);
	tic.mark_board(2);
	tic.mark_board(3);

	REQUIRE(tic.game_over() == true);
}
TEST_CASE("Test win by second row") {
	tic_tac_toe tic;
	tic.start_game("x");
	tic.mark_board(4);
	tic.mark_board(5);
	tic.mark_board(6);

	REQUIRE(tic.game_over() == true);
}
TEST_CASE("Test win by third row") {
	tic_tac_toe tic;
	tic.start_game("x");
	tic.mark_board(7);
	tic.mark_board(8);
	tic.mark_board(9);

	REQUIRE(tic.game_over() == true);
}

TEST_CASE("Test win diagonally from top left") {
	tic_tac_toe tic;
	tic.start_game("x");
	tic.mark_board(1);
	tic.mark_board(5);
	tic.mark_board(9);

	REQUIRE(tic.game_over() == true);
}
TEST_CASE("Test win diagonally from bottom left") {
	tic_tac_toe tic;
	tic.start_game("x");
	tic.mark_board(7);
	tic.mark_board(5);
	tic.mark_board(3);

	REQUIRE(tic.game_over() == true);
}