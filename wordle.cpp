#include <iostream> 
using namespace std; 

int main(){
    string guess; 
    string answer = "horse"; 
    int numGuesses = 0; 

// This while loop will count the number guesses and check if guess isn't equal to answer
    while (numGuesses < 6 && guess != answer){
        cout << "Enter your guess: ";
        cin >> guess; 

        int index = 0;
//As long as index
        while (index < guess.length()){
            if(guess[index] == answer[index]){
            cout << guess[index] << " - green" <<endl;
        } else if (guess[index] != answer[0] && guess[index] != answer[1] && guess[index] != answer[2] && guess[index] != answer[3] && guess[index] != answer[4]){
            cout << guess[index] << " - red" << endl;
        } else {
            cout << guess[index] << " - yellow" << endl;
        }
        ++index;
        }
        ++numGuesses;
    }
    
    if (guess == answer){
        cout << "Good job! You won in " << numGuesses << " guesses. The answer was " << answer << ". Come back tommorow for a new word!" << endl;
    } else { 
        cout << "You'll get them next time. You reached " << numGuesses << " guesses. The answer was " << answer << ". Come back tommorow for a new word!" << endl;
     }
}
