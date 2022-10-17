#include <iostream>
#include <stdlib.h>
using namespace std;
void printBoard();
void playerInput();
void machineInput();
void refreshPage();
void resetGame();
int checkWinner();
int board[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int player = 1;
int main() {
	cout << "Tic Tac Toe\n\nTutorial:\n1.Type in the corresponding number given in the key map. \n2.If you lose, you will be first in the second round, otherwise, you will be second.\n";
	cout << "\nPress any key to play again...\n";
	char c;
	cin >> c;
start:
	refreshPage();
	printBoard();
	playerInput();
	refreshPage();
	printBoard();
	//**********************************************
	if (checkWinner() == 10) {
		cout << endl;
		cout << "***********************************\n";
		cout << "* Game over! It is a tie!         *\n";
		cout << "***********************************\n";
		cout << "\nPress any key to play again...\n";
		char c;
		cin >> c;
		player = 1;
		resetGame();
		goto start;
	}
	if (checkWinner() == player) {
		cout << endl;
		cout << "***********************************\n";
		cout << "* Game over! The winner is YOU!   *\n";
		cout << "***********************************\n";
		cout << "\nPress any key to play again...\n";
		char c;
		cin >> c;
		player = 2;
		resetGame();
		goto secround;
	}
	else if ((checkWinner() != 0) && (checkWinner() != player)) {
		cout << endl;
		cout << "***********************************\n";
		cout << "* Game over! The winner is ME!    *\n";
		cout << "***********************************\n";
		cout << "\nPress any key to play again...\n";
		char c;
		cin >> c;
		player = 1;
		resetGame();
		goto start;
	}
	//**********************************************
	refreshPage();
	printBoard();
secround:
	refreshPage();
	printBoard();
	machineInput();
	refreshPage();
	//printBoard();
	//**********************************************
	if (checkWinner() == 10) {
		cout << endl;
		cout << "***********************************\n";
		cout << "* Game over! It is a tie!         *\n";
		cout << "***********************************\n";
		cout << "\nPress any key to play again...\n";
		char c;
		cin >> c;
		player = 1;
		resetGame();
		goto start;
	}
	if (checkWinner() == player) {
		cout << endl;
		cout << "***********************************\n";
		cout << "* Game over! The winner is YOU!   *\n";
		cout << "***********************************\n";
		cout << "\nPress any key to play again...\n";
		char c;
		cin >> c;
		player = 2;
		resetGame();
		goto secround;
	}
	else if ((checkWinner() != 0) && (checkWinner() != player)) {
		cout << endl;
		cout << "***********************************\n";
		cout << "* Game over! The winner is ME!    *\n";
		cout << "***********************************\n";
		cout << "\nPress any key to play again...\n";
		char c;
		cin >> c;
		player = 1;
		resetGame();
		goto start;
	}
	//**********************************************
	refreshPage();
	printBoard();
	goto start;
	return 0;
}

void resetGame() {
	for (int i = 0; i < 9; i++) {
		board[i] = 0;
	}
}
void refreshPage() {
	for (int i = 0; i < 100; i++) {
		cout << "\n";
	}
}



int checkWinner() {
	if ((board[0] != 0) && (board[1] != 0) && (board[2] != 0) && (board[3] != 0) && (board[4] != 0) && (board[5] != 0) && (board[6] != 0) && (board[7] != 0) && (board[8] != 0)) {
		return 10;
	}
	if ((board[0] == board[1]) && (board[1] == board[2]) && (board[0] != 0)) {
		return board[0];
	}
	if ((board[3] == board[4]) && (board[4] == board[5]) && (board[3] != 0)) {
		return board[3];
	}
	if ((board[6] == board[7]) && (board[7] == board[8]) && (board[6] != 0)) {
		return board[6];
	}
	if ((board[0] == board[3]) && (board[3] == board[6]) && (board[0] != 0)) {
		return board[0];
	}
	if ((board[1] == board[4]) && (board[4] == board[7]) && (board[1] != 0)) {
		return board[1];
	}
	if ((board[2] == board[5]) && (board[5] == board[8]) && (board[2] != 0)) {
		return board[2];
	}
	if ((board[0] == board[4]) && (board[4] == board[8]) && (board[0] != 0)) {
		return board[0];
	}
	if ((board[2] == board[4]) && (board[4] == board[6]) && (board[2] != 0)) {
		return board[2];
	}
	return 0;
}

void machineInput() {
	int input = 9;
	cout << "My turn. Thinking...\n";
	if ((board[0] == board[1]) && (board[0] == player) && (board[2] == 0)) {
		input = 2;
	}
	if ((board[1] == board[2]) && (board[1] == player) && (board[0] == 0)) {
		input = 0;
	}
	if ((board[0] == board[2]) && (board[0] == player) && (board[1] == 0)) {
		input = 1;
	}
	if ((board[3] == board[4]) && (board[3] == player) && (board[5] == 0)) {
		input = 5;
	}
	if ((board[4] == board[5]) && (board[4] == player) && (board[3] == 0)) {
		input = 3;
	}
	if ((board[3] == board[5]) && (board[3] == player) && (board[4] == 0)) {
		input = 4;
	}
	if ((board[6] == board[7]) && (board[6] == player) && (board[8] == 0)) {
		input = 8;
	}
	if ((board[7] == board[8]) && (board[7] == player) && (board[6] == 0)) {
		input = 6;
	}
	if ((board[6] == board[8]) && (board[6] == player) && (board[7] == 0)) {
		input = 7;
	}
	if ((board[0] == board[3]) && (board[0] == player) && (board[6] == 0)) {
		input = 6;
	}
	if ((board[3] == board[6]) && (board[3] == player) && (board[0] == 0)) {
		input = 0;
	}
	if ((board[0] == board[6]) && (board[0] == player) && (board[3] == 0)) {
		input = 3;
	}
	if ((board[1] == board[4]) && (board[1] == player) && (board[7] == 0)) {
		input = 7;
	}
	if ((board[4] == board[7]) && (board[4] == player) && (board[1] == 0)) {
		input = 1;
	}
	if ((board[1] == board[7]) && (board[1] == player) && (board[4] == 0)) {
		input = 4;
	}
	if ((board[2] == board[5]) && (board[2] == player) && (board[8] == 0)) {
		input = 8;
	}
	if ((board[5] == board[8]) && (board[5] == player) && (board[2] == 0)) {
		input = 2;
	}
	if ((board[2] == board[8]) && (board[2] == player) && (board[5] == 0)) {
		input = 5;
	}
	if ((board[0] == board[4]) && (board[0] == player) && (board[8] == 0)) {
		input = 8;
	}
	if ((board[4] == board[8]) && (board[4] == player) && (board[0] == 0)) {
		input = 0;
	}
	if ((board[0] == board[8]) && (board[0] == player) && (board[4] == 0)) {
		input = 4;
	}
	if ((board[2] == board[4]) && (board[2] == player) && (board[6] == 0)) {
		input = 6;
	}
	if ((board[4] == board[6]) && (board[4] == player) && (board[2] == 0)) {
		input = 2;
	}
	if ((board[2] == board[6]) && (board[2] == player) && (board[4] == 0)) {
		input = 4;
	}
	if (input == 9) {
		cout << "No solution, randomly filling in...\n";
		int i;
		while (input != 9) {
			i = rand() % 9;
			if (board[i] == 0) {
				input = i;
			}
		}
	}
	if (player == 1) {
		board[input] = 2;
	}
	else {
		board[input] = 1;
	}
	cout << "Placed on address " << input << "\n";
	printBoard();
}

void playerInput() {
	int input;
ask:
	input = 0;
	cout << "Your turn. Enter a number.\n";
	cin >> input;
	if (input > 9) {
		cout << "The number you entered is too big.\n";
		goto ask;
	}
	else if (input < 1) {
		cout << "The number you entered is too small.\n";
		goto ask;
	}
	else if (board[input - 1] != 0) {
		cout << "The number you entered has already filled in.\n";
		goto ask;
	}
	else {
		board[input - 1] = player;
	}
}




void printBoard() {
	char displayBoard[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
	for (int i = 0; i < 9; i++) {
		switch (board[i]) {
		case 0:
			displayBoard[i] = ' ';
			break;
		case 1:
			displayBoard[i] = 'O';
			break;
		case 2:
			displayBoard[i] = 'X';
			break;
		};
	}
	cout << "Game Board          Key Map\n";
	cout << "*************       *************\n";
	cout << "* " << displayBoard[0] << " * " << displayBoard[1] << " * " << displayBoard[2] << " *       * 1 * 2 * 3 *\n";
	cout << "*************       *************\n";
	cout << "* " << displayBoard[3] << " * " << displayBoard[4] << " * " << displayBoard[5] << " *       * 4 * 5 * 6 *\n";
	cout << "*************       *************\n";
	cout << "* " << displayBoard[6] << " * " << displayBoard[7] << " * " << displayBoard[8] << " *       * 7 * 8 * 9 *\n";
	cout << "*************       *************\n";
}
