#include "014-BlackJack-House.h"
#include <algorithm>

class Deck : public Hand
{
public:
    Deck();
    virtual ~Deck();
    void populate();
    void shuffle();
    void deal(Hand& aHand);
    void additionalCards(GenericPlayer& aGenericPlayer);
};