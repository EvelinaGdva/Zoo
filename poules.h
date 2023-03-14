#ifndef IANIMAL_H
#define IANIMAL_H

#include "IAnimal.h"

using namespace std;

class Poules : public IAnimal
{
private:
    float m_alimentsParJ; // en kg
    int m_jrsAvantFaim{1};
    int m_maturiteSexuelle{30 * 6};
    int m_finDeReprod{365 * 8};
    int m_esperanceDeVie{365 * 15};
public:
    Poules(string name, int age):
};

#endif // IANIMAL_H
