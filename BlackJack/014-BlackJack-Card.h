#include <iostream>

class Card
{
    friend std::ostream& operator<<(std::ostream& os, const Card& aCard);
public:
    enum rank {ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};
    enum suit {CLUBS, DIAMONDS, HEARTS, SPADES};
    Card(rank r = ACE, suit s = SPADES, bool ifu = true);
    int getValue() const;
    void flip();
private:
    rank m_rank;
    suit m_suit;
    bool m_isFaceUp;
};