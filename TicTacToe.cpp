
#include <iostream>
using namespace std;

char board[3][3];
char currentPlayer = 'X';

void resetBoard() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = ' ';
}

void printBoard() {
    cout << "  0 1 2" << endl;
    for (int i = 0; i < 3; i++) {
        cout << i << " ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            if (j < 2) cout << "|";
        }
        cout << endl;
        if (i < 2) cout << "  -+-+-" << endl;
    }
}

bool makeMove(int row, int col) {
    if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
        board[row][col] = currentPlayer;
        return true;
    }
    return false;
}

bool checkWin() {
    for (int i = 0; i < 3; i++)
        if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer)
            return true;
    for (int j = 0; j < 3; j++)
        if (board[0][j] == currentPlayer && board[1][j] == currentPlayer && board[2][j] == currentPlayer)
            return true;
    if (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer)
        return true;
    if (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer)
        return true;
    return false;
}

bool checkDraw() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == ' ')
                return false;
    return true;
}

void switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

int main() {
    resetBoard();
    int row, col;
    while (true) {
        printBoard();
        cout << "Player " << currentPlayer << ", enter row and column: ";
        cin >> row >> col;
        if (makeMove(row, col)) {
            if (checkWin()) {
                printBoard();
                cout << "Player " << currentPlayer << " wins!" << endl;
                break;
            } else if (checkDraw()) {
                printBoard();
                cout << "It's a draw!" << endl;
                break;
            }
            switchPlayer();
        } else {
            cout << "Invalid move. Try again." << endl;
        }
    }
    return 0;
}
