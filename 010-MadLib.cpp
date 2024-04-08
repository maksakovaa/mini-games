#include <iostream>
#include <string>

using namespace std;

void askText(const string& promt, string& str)
{
    cout << promt;
    cin >> str;
}

int askNumber(const string& promt)
{
    int num;
    cout << promt;
    cin >> num;
    return num;
}

void tellStory(const string& name, const string& noun, int number, const string& bodyPart, const string& verb)
{
    cout << "\nHere's your story:\n";
    cout << "The famous explorer ";
    cout << name;
    cout << " had nearly given up a life-long quest to find\n";
    cout << "The Lost City of ";
    cout << noun;
    cout << " when one day, the ";
    cout << noun;
    cout << " found the explorer.\n";
    cout << "Surrounded by ";
    cout << number;
    cout << " " << noun;
    cout << ", a tear came to ";
    cout << name << "'s ";
    cout << bodyPart << ".\n";
    cout << "After all this time the quest was finally over. ";
    cout << "And then, the ";
    cout << noun << "\n";
    cout << "promtly devoured ";
    cout << name << ". ";
    cout << "The moral of the story? Be careful what you ";
    cout << verb;
    cout << " for.\n";
}

int main()
{
    cout << "Welcome to Mad Lib.\n\n";
    cout << "Answer the following questions to help create a new story\n";
    string name, noun, bodyPart, verb;
    askText("Please enter a name: ", name);
    askText("Please enter a plural noun: ", noun);
    int number = askNumber("Please enter a number: ");
    askText("Please enter a body part: ", bodyPart);
    askText("Please enter a verb: ", verb);
    tellStory(name, noun, number, bodyPart, verb);
}