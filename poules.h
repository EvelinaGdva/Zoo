#ifndef IANIMAL_H
#define IANIMAL_H

#include "IAnimal.h"

using namespace std;

class Poules : public IAnimal
{
public:
    Poules(string name, int age):

    bool isMature() const;

    bool isReproductible() const;

private:
    float m_alimentsParJ; // en kg
    int m_jrsAvantFaim{1};
    int m_maturiteSexuelle{30 * 6};
    int m_finDeReprod{365 * 8};
    int m_esperanceDeVie{365 * 15};
};

#endif // IANIMAL_H
