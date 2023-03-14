#ifndef IANIMAL_H
#define IANIMAL_H

#include "IAnimal.h"

using namespace std;

class Tigres : public IAnimal
{
private:
    float m_alimentsParJ; // en kg
    int m_jrsAvantFaim{10};
    int m_maturiteSexuelle; // different pour les deux
    int m_finDeReprod{365 * 14};
    int m_esperanceDeVie{365 * 25};
public:
    Tigres(string name, char sexe, int age):
};

#endif // IANIMAL_H
