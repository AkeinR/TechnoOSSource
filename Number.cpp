#include <iostream>
using namespace std;

int main() {
    // Title & Open Screen
    cout << "Welcome to the Number Guessing Game \n";
    cout << "Enter 0 to Exit \n";
    int loop = 1;
    int Guess = 0;
    string spare = "";
    while(loop == 1) {
      // Random Number Gen
    int Number = rand() % 10+1  ;
    
    cin >> Guess;
    //Answer Checks
    if(Guess == 0) {
      cout << "Thanks for playing \n";
      break;
    }

    if(Guess == Number) {
      cout << "You Are Correct \n";
    } else if(Guess != Number) {
        cout << "You were wrong the number was " << Number << endl;
    }

    }

}