#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

int main() {
    using namespace std;
    std::srand(std::time(0));

    int randomNumber = std::rand() % 100 + 1;
    int userGuess = 0;

    cout << "Welcome to the Number Guessing Game!" << std::endl;
    cout << "I have selected a number between 1 and 100. Can you guess it?" << std::endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> userGuess;

        if (userGuess < randomNumber) {
            cout << "Too low! Try again." << std::endl;
        }
        else if (userGuess > randomNumber) {
            cout << "Too high! Try again." << std::endl;
        }
        else {
            cout << "Congratulations! You guessed the correct number: " << randomNumber << std::endl;
            break;
        }
    }

    return 0;
}

