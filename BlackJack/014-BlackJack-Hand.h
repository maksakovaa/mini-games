#include "014-BlackJack-Card.h"
#include <vector>

class Hand
{
public:
    Hand();
    virtual ~Hand();
    void add(Card* pCard);
    void clear();
    int getTotal() const;
protected:
    std::vector<Card*> m_Cards;
};