#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int secretNumber;
    int tryCount = 0;
    cout << "\nДобро пожаловать в Угадай число!\n\n";
    cout << "Введите число которое должен угадать компьютер от 1 до 100: ";
    cin >> secretNumber;
    srand(static_cast<unsigned int>(time(0)));
    int guess = rand() % 100 + 1;
    do
    {
        ++tryCount;
        if (guess > secretNumber)
        {
            --guess;
        }
        else if (guess < secretNumber)
        {
            ++guess;
        }
        if (guess == secretNumber)
        {
            cout << "\nВот оно! Угадал с " << tryCount << " попыток\n";
        }
    } while (guess != secretNumber);   
    return 0;
}
