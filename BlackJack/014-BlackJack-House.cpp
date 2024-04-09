#include "014-BlackJack-House.h"

House::House(const std::string& name): GenericPlayer(name){}
House::~House(){}
bool House::isHitting() const
{
    return (getTotal() <= 16);
}
void House::flipFirstCard()
{
    if (!(m_Cards.empty()))
    {
        m_Cards[0]->flip();
    }
    else
    {
        std::cout << "No cards to flip!\n";
    }
}