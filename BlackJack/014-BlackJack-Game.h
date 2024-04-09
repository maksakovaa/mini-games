#include "014-BlackJack-Deck.h"

class Game
{
public:
    Game(const std::vector<std::string>& names);
    ~Game();
    void play();
private:
    Deck m_Deck;
    House m_House;
    std::vector<Player> m_Players;
};