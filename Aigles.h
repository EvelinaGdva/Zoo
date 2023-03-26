#ifndef AIGLES_H
#define AIGLES_H

#include <string>
#include "IAnimal.h"

using namespace std;

class Aigles : public IAnimal{
public:
    Aigles(string name, char sexe, int age);

    bool isReproductible(int age);
private:
    int m_maturiteSexuelle{365 * 4}; // 4 ans
    int m_finDeReprod{365 * 14}; // 14 ans

private:
    float m_alimentsParJMale{0.25};
    float m_alimentsParJFemelle{0.3}; // en kg
    int m_jrsAvantFaim{10}; //10 jours
    int m_esperanceDeVie{365 * 25}; //25 ans
};

#endif //AIGLES_H
