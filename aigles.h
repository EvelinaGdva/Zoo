#ifndef IANIMAL_H
#define IANIMAL_H

#include "IAnimal.h"

using namespace std;

class Aigles : public IAnimal
{
public:
    Aigles(string name, char sexe, int age, float alimentsParJ);

    bool isMature() const;

    bool isReproductible() const;
private:
    float m_alimentsParJ; // en kg
    int m_jrsAvantFaim{10}; //10 jours
    int m_maturiteSexuelle{365 * 4}; // 4 ans
    int m_finDeReprod{365 * 14}; // 14 ans
    int m_esperanceDeVie{365 * 25}; //25 ans
};

#endif // IANIMAL_H
