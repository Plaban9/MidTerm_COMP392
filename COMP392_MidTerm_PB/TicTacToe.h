#pragma once

namespace Game
{
	class TicTacToe
	{
	private:
		char _board[3][3];
		void clearBoard();
		void printBoard();
		void validateCoordinate(int row, int column, char symbol);
		int winCheck(char symbol);
		bool rowCheck(char symbol);
		bool columnCheck(char symbol);
		bool diagonalCheck(char symbol);
		bool leftDiagonalCheck(char symbol);
		bool rightDiagonalCheck(char symbol);

	public:
		TicTacToe();

		void playGame();

		~TicTacToe();
	};
}

