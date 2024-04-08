#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;

const int MAX_WRONG = 8;
int wrong = 0;
string used = "";
char guess;

void inputGuess()
{
    cout << "\n\nEnter your guess: ";
    cin >> guess;
    guess = toupper(guess);
}

void checkGuess(const string& THE_WORD, string& soFar)
{
    while (used.find(guess) != string::npos)
    {
        cout << "\nYou are already guessed " << guess << endl;
        inputGuess();
    }
    used += guess;
    if (THE_WORD.find(guess) != string::npos)
    {
        cout << "Thats right! " << guess << " is int the word.\n";
        for (int i = 0; i < THE_WORD.length(); ++i)
        {
            if (THE_WORD[i] == guess)
            {
                soFar[i] = guess;
            }
        }
    }
    else
    {
        cout << "Sorry. " << guess << " isn't in the word.\n";
        ++wrong;
    }
}

int main()
{
    vector<string> words;
    words.push_back("GUESS");
    words.push_back("HANGMAN");
    words.push_back("DIFFICULT");
    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(words.begin(), words.end());
    const string THE_WORD = words[0];
    string soFar(THE_WORD.size(), '*');
    cout << "Welcome to Hangman. Good luck!\n";
    while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
    {
        cout << "\n\nYou have " << (MAX_WRONG - wrong);
        cout << " incorrect guesses left.\n";
        cout << "\nYou have used the following letters:\n" << used << endl;
        cout << "\nSo far, the word is:\n" << soFar << endl;      
        inputGuess();
        checkGuess(THE_WORD, soFar);
    }
    if (wrong == MAX_WRONG)
    {
        cout << "\nYou've been hanged!";
    }
    else
    {
        cout << "\nYou guessed it!";
    }
    cout << "\nThe word was " << THE_WORD << endl;   
    return 0;
}