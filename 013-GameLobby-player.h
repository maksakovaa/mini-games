#include <iostream>
#include <string>

class Player
{
public:
    Player(const std::string& name);
    std::string GetName() const;
    Player* GetNext() const;
    void SetNext(Player* next);
private:
    std::string m_name;
    Player* m_pNext;
};