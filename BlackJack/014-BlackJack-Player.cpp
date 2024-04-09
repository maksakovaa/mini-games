#include "014-BlackJack-Player.h"

Player::Player(const std::string& name): GenericPlayer(name) {}
Player::~Player() {}
bool Player::isHitting() const
{
    std::cout << m_name << ". do you want a hit? (Y/N): ";
    char response;
    std::cin >> response;
    return (response == 'y' || response == 'Y');
}
void Player::win() const
{
    std::cout << m_name << " wins.\n";
}
void Player::loose() const
{
    std::cout << m_name << " loses.\n";
}

void Player::push() const
{
    std::cout << m_name << " pushes.\n";
}