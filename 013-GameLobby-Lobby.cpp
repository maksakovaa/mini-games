#include "013-GameLobby-Lobby.h"

Lobby::Lobby(): m_pHead(0) {}
Lobby::~Lobby() { Clear(); }

void Lobby::AddPlayer()
{
    system("clear");
    std::cout << "Please enter the name of the new player: ";
    std::string name;
    std::cin >> name;
    Player* pNewPlayer = new Player(name);
    if (m_pHead == 0)
    {
        m_pHead = pNewPlayer;
    }
    else
    {
        Player* pIter = m_pHead;
        while (pIter->GetNext() != 0)
        {
            pIter = pIter->GetNext();
        }
        pIter->SetNext(pNewPlayer);
    }
}

void Lobby::RemovePlayer()
{
    system("clear");
    if (m_pHead == 0)
    {
        std::cout << "The game lobby is empty. No one to remove!\n";
    }
    else
    {
        Player* pTemp = m_pHead;
        m_pHead = m_pHead->GetNext();
        delete pTemp;
    }
}

void Lobby::Clear()
{
    system("clear");
    while (m_pHead != 0)
    {
        RemovePlayer();
    }
    
}
std::ostream& operator<<(std::ostream& os, const Lobby& aLobby)
{
    system("clear");
    Player* pIter = aLobby.m_pHead;
    os << "\nHere's who's in the game lobby:\n";
    if (pIter == 0)
    {
        os << "The lobby is empty.\n";
    }
    else
    {
        while (pIter !=0)
        {
            os << pIter->GetName() << std::endl;
            pIter = pIter->GetNext();
        }
    }
    return os;
}