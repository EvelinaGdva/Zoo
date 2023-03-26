#ifndef COQ_H
#define COQ_H

#include <string>
#include "IAnimal.h"

using namespace std;

class Coq : public IAnimal
{
public:
    Coq(string name,char sexe, int age);

private:
    bool isReproductible(int age) const;
    int m_maturiteSexuelle{30 * 6}; //6 mois
    int m_finDeReprod{365 * 8}; // 8ans
    float m_alimentsParJ{0.18}; // en kg
    int m_jrsAvantFaim{2};
    int m_esperanceDeVie{365 * 15};
};

#endif // COQ_H
