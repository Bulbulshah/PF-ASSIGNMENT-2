#include <iostream>
using namespace std;

void displayInstructions() {
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Instructions:" << endl;
    cout << "1. The computer will think of a number between 1 and 100." << endl;
    cout << "2. You have 4 attempts to guess the number." << endl;
    cout << "3. After each wrong guess, you will get a hint whether the number is smaller or larger." << endl;
    cout << "4. After guessing, you can choose to continue or exit the game." << endl;
    cout << "Good luck and have fun!" << endl;
    cout << "---------------------------------------------------------\n";
}

int generateRandomNumber() {
    static int seed = 5323; // Initial seed value
    seed = (8253729 * seed + 2396403) % 32768; // Linear congruential generator
    return (seed % 100) + 1; // Generate a number between 1 and 100
}

int main() {
    char playAgain;
    do {
        displayInstructions();

        int randomNumber = generateRandomNumber(); // Generate a random number between 1 and 100
        int userGuess;
        bool guessedCorrectly = false;

        cout << "The computer has chosen a number between 1 and 100. Start guessing!\n";

        for (int attempts = 1; attempts <= 4; ++attempts) {
            cout << "Attempt " << attempts << ": Enter your guess: ";
            cin >> userGuess;

            if (userGuess == randomNumber) {
                cout << "Congratulations! You guessed the correct number!\n";
                guessedCorrectly = true;
                break;
            } else if (userGuess < randomNumber) {
                cout << "Your guess is too small. Try a larger number.\n";
            } else {
                cout << "Your guess is too large. Try a smaller number.\n";
            }
        }

        if (!guessedCorrectly) {
            cout << "Sorry, you've used all 4 attempts. The correct number was " << randomNumber << ".\n";
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
        cout << "\n";

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thank you for playing! Goodbye!\n";
    return 0;
}
