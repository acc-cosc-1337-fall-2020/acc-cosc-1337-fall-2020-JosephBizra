#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test game over if 9 slots are selected") {
	tic_tac_toe tic;
	tic.start_game("x");
	
	int pos1 = 1;
	tic.mark_board(pos1);
	REQUIRE(tic.pegs[pos1-1] == "x");

	int pos2 = 2;
	tic.mark_board(pos2);
	REQUIRE(tic.pegs[pos2-1] == "o");

	int pos3 = 3;
	tic.mark_board(pos3);
	REQUIRE(tic.pegs[pos3-1] == "x");

	int pos4 = 4;
	tic.mark_board(pos4);
	REQUIRE(tic.pegs[pos4-1] == "o");

	int pos5 = 5;
	tic.mark_board(pos5);
	REQUIRE(tic.pegs[pos5-1] == "x");

	int pos6 = 6;
	tic.mark_board(pos6);
	REQUIRE(tic.pegs[pos6-1] == "o");

	int pos7 = 7;
	tic.mark_board(pos7);
	REQUIRE(tic.pegs[pos7-1] == "x");

	int pos8 = 8;
	tic.mark_board(pos8);
	REQUIRE(tic.pegs[pos8-1] == "o");

	int pos9 = 9;
	tic.mark_board(pos9);
	REQUIRE(tic.pegs[pos9-1] == "x");
}

