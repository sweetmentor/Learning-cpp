#include <iostream>



using namespace std;

// int main()
// {
//     int secretNum = 7;
//     int guess;
    
//     while (secretNum != guess) {
//         cout << "Enter guess: ";
//         cin >> guess;
//     }
    
//     cout << "You win!";
    
    
//     return 0;
// }

int main()
{
    int secretNum = 7;
    int guess;
    // ----Limit the no of guesses----
    int guessCount = 0;
    int guessLimit = 3;
    // -----ensure the function runs as long as player is not out of guess---
    bool outOfGuesses = false;
    
    while (secretNum != guess && !outOfGuesses) {
        if(guessCount < guessLimit) {
            cout << "Enter guess: ";
            cin >> guess;
            guessCount++;
        } else {
            outOfGuesses = true;
        }
    }
    
    if(outOfGuesses) {
        cout << "You loose!";
    } else {
        cout << "You win!";
    }
    
    
    return 0;
}