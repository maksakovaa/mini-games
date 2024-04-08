#include "012-Tamagochi-critter.h"

Critter::Critter(int hunger, int boredom) : m_hunger(hunger), m_boredom(boredom) {}
Critter::~Critter(){}

inline int Critter::GetMood() const
{
    return (m_hunger + m_boredom);
}

void Critter::PassTime(int time)
{
    m_hunger += time;
    m_boredom += time;
}
void Critter::Talk()
{
    system("clear");
    std::cout << "I'm a critter and i feel ";
    int mood = GetMood();
    if (mood > 15)
    {
        std::cout << "mad.\n";
    }
    else if (mood > 10)
    {
        std::cout << "frustrated.\n";
    }
    else if (mood > 5)
    {
        std::cout << "okay.\n";
    }
    else
    {
        std::cout << "happy.\n";
    }
    PassTime();
}
void Critter::Eat(int food)
{
    system("clear");
    std::cout << "Brruppp.\n";
    m_hunger -= food;
    if (m_hunger < 0)
    {
        m_hunger = 0;
    }
    PassTime();
}
void Critter::Play(int fun)
{
    system("clear");
    std::cout << "Wheee!\n";
    m_boredom -= fun;
    if (m_boredom < 0)
    {
        m_boredom = 0;
    }
    PassTime();
}
void Critter::vetStatus()
{
    system("clear");
    PassTime();
    std::cout << "Current hunger level is: " << m_hunger << std::endl;
    std::cout << "Current bore level is " << m_boredom << std::endl;
}