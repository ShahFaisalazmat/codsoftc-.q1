#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    // srand(static_cast<unsigned int>(time(0))); // Seed the random number generator
    int randomNumber = rand() % 100 + 1; // Generate random number between 1 and 100
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!"<<endl;

    do {
        cout << "Enter your guess (between 1 and 100): ";
        cin >> guess;
        attempts++;

        if (guess < randomNumber) {
            cout << "Too low! Try a higher number." << endl;
        } else if (guess > randomNumber) {
            cout << "Too high! Try a lower number." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." << endl;
        }
    } while (guess != randomNumber);

    return 0;
}
