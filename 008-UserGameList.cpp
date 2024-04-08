#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> game_list;
    bool status = true;
    cout << "welcome to User game list.\n\n";
    while (status)
    {
        cout << "Available options\n";
        cout << "1 - show current list\n";
        cout << "2 - add game in list.\n";
        if (!game_list.empty())
        {
            cout << "3 - delete game from list\n";
            cout << "4 - exit\n";
        }
        else
        {
            cout << "3 - exit\n";
        }
        int choice;
        cin >> choice;
        if (game_list.empty())
        {
            while (choice != 1 && choice != 2 && choice != 3)
            {
                cin.clear();
                cout << "Incorrect input. Try again:";
                cin >> choice;
            }
        }
        else
        {
            while (choice != 1 && choice != 2 && choice !=3 && choice != 4)
            {
                cin.clear();
                cout << "Incorrect input. Try again:";
                cin >> choice;
            }
        }
        
        switch (choice)
        {
        case 1:
            {
                if (game_list.empty())
                {
                    cout << "Current list is empty\n\n";
                    break;
                }
                
                vector<string>::iterator curr = game_list.begin();
                vector<string>::iterator end = game_list.end();
                for (curr; curr != end; ++curr)
                {
                    cout << *curr << endl;
                }
                cout << endl;
                break;
            }
        case 2:
            {
                string temp;
                cout << "Enter game title: ";
                cin >> temp;
                game_list.push_back(temp);
                cout << temp << " added to game list.\n\n";
                break;
            }
        case 3:
            {
                if (game_list.empty())
                {
                    status = false;
                    break;
                }
                else
                {
                    int choice;
                    cout << "Choose title for delete:\n";
                    for (size_t i = 0; i < game_list.size(); i++)
                    {
                        cout << i << " - " << game_list[i] << endl;
                    }
                    cin >> choice;
                    game_list.erase(game_list.begin() + choice);
                }
                break;
            }
        case 4:
            if (!game_list.empty())
            {
                status = false;
            }
            break;
        }
    }
    return 0;
}