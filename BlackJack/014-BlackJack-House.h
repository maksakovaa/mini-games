#include "014-BlackJack-Player.h"

class House : public GenericPlayer
{
public:
    House(const std::string& name = "House");
    virtual ~House();
    virtual bool isHitting() const;
    void flipFirstCard();
};