//3. Tic-Tac-Toe Game

#include <iostream>
#include <vector>

class TicTacToe {
private:
    std::vector<std::vector<char>> board;
    char currentPlayer;

public:
    TicTacToe() : board(3, std::vector<char>(3, ' ')), currentPlayer('X') {}

    void displayBoard() {
        for (const auto& row : board) {
            for (const auto& cell : row) {
                std::cout << cell << " ";
            }
            std::cout << "\n";
        }
    }

    void makeMove(int row, int col) {
        if (board[row][col] == ' ') {
            board[row][col] = currentPlayer;
            currentPlayer = (currentPlayer =='X') ? 'O' : 'X';
        } else {
            std::cout << "Cell already occupied. Try again.\n";
        }
    }

    bool checkWinner() {
        for (int i = 0; i < 3; ++i) {
            if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') return true;
            if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') return true;
        }
        if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') return true;
        if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') return true;
        return false;
    }
};

int main() {
    TicTacToe game;
    int row, col;
    int moves = 0;

    std::cout << "--- Welcome to Tic-Tac-Toe ---\n";

    while (true) {
        game.displayBoard();
        std::cout << "Enter row and column (0, 1, 2) to place your move (Player " 
                  << ((moves % 2 == 0) ? 'X' : 'O') << "): ";
        std::cin >> row >> col;

        if (row < 0 || row > 2 || col < 0 || col > 2) {
            std::cout << "Invalid input. Please enter values between 0 and 2.\n";
            continue;
        }

        game.makeMove(row, col);
        moves++;

        if (game.checkWinner()) {
            game.displayBoard();
            std::cout << "Player " << ((moves % 2 == 1) ? 'X' : 'O') << " wins!\n";
            break;
        }

        if (moves == 9) {
            game.displayBoard();
            std::cout << "It's a draw!\n";
            break;
        }
    }

    return 0;
}
