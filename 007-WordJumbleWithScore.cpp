#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    enum fields {WORD, HINT, NUM_FIELDS};
    int score = 0;
    const int NUM_WORDS = 5;
    const string WORDS[NUM_WORDS][NUM_FIELDS] = 
    {
        {"wall", "Do you feel you're banging your head against something?"},
        {"glasses", "These might help you see the answer."},
        {"labored", "Going slowly, is it?"},
        {"persistent", "Keep at it."},
        {"jumble", "It's what the game is all about."}
    };

    cout << "\t\t\tWelcome to Word Jumble!\n\n";
    cout << "Unscramble the letters to make a word.\n";
    cout << "Enter 'hint' for a hint (-2 points)\n";
    cout << "Enter 'quit' to quit the game.\n\n";

    while (true)
    {
        srand(static_cast<unsigned int>(time(0)));
        int choice = (rand() % NUM_WORDS);
        string theWord = WORDS[choice][WORD];
        string theHint = WORDS[choice][HINT];
        string jumble = theWord;
        int length = jumble.size();
        for (int i = 0; i < length; ++i)
        {
            int index1 = (rand() % length);
            int index2 = (rand() % length);
            char temp = jumble[index1];
            jumble[index1] = jumble[index2];
            jumble[index2] = temp;
        }

        cout << "The jumble is " << jumble << endl;
        cout << "Current score is " << score << endl;
        string guess;
        cout << "\n\nYour guess: ";
        cin >> guess;
        while ((guess != theWord) && (guess != "quit"))
        {
            
            if (guess == "hint")
            {
                score -= 2;
                cout << theHint;
            }
            else
            {
                score -= 1;
                cout << "Sorry. thats not it.";
            }
            cout << "Current score is " << score << endl;
            cout << "\n\nYour guess: ";
            cin >> guess;       
        }
        if (guess == theWord)
        {
            score += length;
            cout << "\nThat's it! You guessed it!\n";
            cout << "Current score is " << score << endl;
            cout << "Continue play? (y/n)\n";
            char choice;
            cin >> choice;
            while (choice != 'y' && choice != 'n')
            {
                cout << "Incorrect input.\nContinue play? (y/n)\n";
                cin >> choice;
            }
            if (choice == 'n')
            {
                break;
            }
            if (choice == 'y')
            {
                continue;
            }
        }
    }
    
    cout << "\nThanks for playing.\n";
    return 0;     
}