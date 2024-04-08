#include "013-GameLobby-player.h"

Player::Player(const std::string& name)
{
    m_name = name;
    m_pNext = 0;
}
std::string Player::GetName() const
{
    return m_name;
}
Player* Player::GetNext() const
{
    return m_pNext;
}
void Player::SetNext(Player* next)
{
    m_pNext = next;
}