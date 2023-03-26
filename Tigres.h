#ifndef TIGRES_H
#define TIGRES_H

#include "IAnimal.h"
#include <string>

using namespace std;

class Tigres : public IAnimal
{
public:
    Tigres(string name, char sexe, int age);

    bool isReproductible(int age) const;
    int m_maturiteSexuelleMale{365*6}; // 6ans pour le male
    int m_finDeReprod{365 * 14}; //14 ans
    int m_maturiteSexuelleFemelle{365 *4}; //4ans pour la femelle

private:
    float m_alimentsParJMale{12};
    float m_alimentsParJFemelle{10};// en kg
    int m_jrsAvantFaim{2};
    int m_esperanceDeVie{365 * 25};
};

#endif // TIGRES_H
