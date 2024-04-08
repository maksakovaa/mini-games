#include <iostream>

using namespace std;

int main()
{
    enum diff {Easy = 1, Normal, Hard};
    cout << "Уровни сложности:\n\n";
    cout << diff::Easy << " - Easy\n";
    cout << diff::Normal << " - Normal\n";
    cout << diff::Hard << " - Hard\n";
    cout << "Ваш выбор: ";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case diff::Easy:
        cout << "Вы выбрали Easy\n";
        break;
    case diff::Normal:
        cout << "Вы выбрали Normal\n";
        break;
    case diff::Hard:
        cout << "Вы выбрали Hard\n";
        break;
    default:
        cout << "Вы выбрали неверно.\n";
        break;
    }
    return 0;
}
