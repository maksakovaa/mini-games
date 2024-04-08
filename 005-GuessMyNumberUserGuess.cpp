#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = rand() % 100 + 1;
    int tryCount = 0;
    int guess;
    cout << "\nДобро пожаловать в Угадай число!\n\n";
    do
    {
        cout << "Введите число: ";
        cin >> guess;
        ++tryCount;
        if (guess > secretNumber)
        {
            cout << "Число больше загаданного!\n\n";
        }
        else if (guess < secretNumber)
        {
            cout << "Число меньше загаданного!\n\n";
        }
        else
        {
            cout << "\nВот оно! Угадали с " << tryCount << " попыток\n";
        }
    } while (guess != secretNumber);
    
    return 0;
}
