#include "013-GameLobby-player.h"

class Lobby
{
    friend std::ostream& operator<<(std::ostream& os, const Lobby& aLobby);
private:
    Player* m_pHead;  
public:
    Lobby();
    ~Lobby();
    void AddPlayer();
    void RemovePlayer();
    void Clear();
};