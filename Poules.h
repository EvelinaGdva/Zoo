#ifndef POULES_H
#define POULES_H

#include "IAnimal.h"

using namespace std;

class Poules : public IAnimal
{
public:
    Poules(string name, int age);

    bool isReproductible(int age) const;
private:
    int m_maturiteSexuelle{30 * 6}; // 6 mois
    int m_finDeReprod{365 * 8}; // 8 ans

private:
    float m_alimentsParJ{0.15}; // en kg
    int m_jrsAvantFaim{1};
    int m_esperanceDeVie{365 * 15};
};

#endif // POULES_H
