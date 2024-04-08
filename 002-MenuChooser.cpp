#include <iostream>

using namespace std;

int main()
{
    cout << "Уровни сложности:\n\n";
    cout << "1 - Easy\n";
    cout << "2 - Normal\n";
    cout << "3 - Hard\n";
    cout << "Ваш выбор: ";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Вы выбрали Easy\n";
        break;
    case 2:
        cout << "Вы выбрали Normal\n";
        break;
    case 3:
        cout << "Вы выбрали Hard\n";
        break;
    default:
        cout << "Вы выбрали неверно.\n";
        break;
    }
    return 0;
}
