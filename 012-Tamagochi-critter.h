#include <iostream>
class Critter
{
private:
    int m_hunger;
    int m_boredom;
    int GetMood() const;
    void PassTime(int time = 1);
public:
    Critter(int hunger = 0, int boredom = 0);
    ~Critter();
    void Talk();
    void Eat(int food = 4);
    void Play(int fun = 4);
    void vetStatus();
};