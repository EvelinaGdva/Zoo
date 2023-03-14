#ifndef IANIMAL_H
#define IANIMAL_H

#include "IAnimal.h"

using namespace std;

class Coq : public IAnimal
{
private:
    float m_alimentsParJ; // en kg
    int m_jrsAvantFaim{2};
    int m_maturiteSexuelle{30 * 6};
    int m_finDeReprod{365 * 8};
    int m_esperanceDeVie{365 * 15};
public:
    Coq(string name, int age):
};

#endif // IANIMAL_H
