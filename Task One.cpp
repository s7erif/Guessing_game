#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

int main() {
    using namespace std;
    srand(time(0));

    int randomNumber = rand() % 100 + 1;
    int userGuess = 0;
    int attempts = 0;
    const int maxAttempts = 7; 

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100. Can you guess it?" << endl;

    while (attempts < maxAttempts) {
        cout << "Enter your guess: ";
        cin >> userGuess;

        if (userGuess < randomNumber) {
            cout << "Too low! Try again." << endl;
        }
        else if (userGuess > randomNumber) {
            cout << "Too high! Try again." << endl;
        }
        else {
            cout << "Congratulations! You guessed the correct number: " << randomNumber << endl;
            return 0; 
        }

        attempts++;

        if (attempts == maxAttempts) {
            cout << "Sorry! You've used all your attempts. The correct number was: " << randomNumber << endl;
        }
    }
    

    return 0;
}
