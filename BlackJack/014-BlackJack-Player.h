#include "014-BlackJack-GenericPlayer.h"

class Player : public GenericPlayer
{
public:
    Player(const std::string& name = "");
    virtual ~Player();
    virtual bool isHitting() const;
    void win() const;
    void loose() const;
    void push() const;
};