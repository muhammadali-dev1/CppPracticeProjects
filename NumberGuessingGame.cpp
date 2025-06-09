
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // seed random number generator
    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {
        int numberToGuess = rand() % 100 + 1; // random number between 1 and 100
        int userGuess;
        int attempts = 0;

        cout << "Guess the number (between 1 and 100): ";

        do {
            cin >> userGuess;
            attempts++;

            if (userGuess > numberToGuess) {
                cout << "Too high! Try again: ";
            } else if (userGuess < numberToGuess) {
                cout << "Too low! Try again: ";
            } else {
                cout << "Correct! You guessed it in " << attempts << " attempts." << endl;
            }

        } while (userGuess != numberToGuess);

        cout << "Play again? (y/n): ";
        cin >> playAgain;
    }

    cout << "Thanks for playing!" << endl;
    return 0;
}
