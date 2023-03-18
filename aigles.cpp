#include "aigles.h"

Aigles::Aigles(string name, char sexe, int age, float alimentsParJ) :
    IAnimal(name, sexe, age), m_alimentsParJ(alimentsParJ),
    m_jrsAvantFaim(10), m_maturiteSexuelle(365 * 4),
    m_finDeReprod(365 * 14), m_esperanceDeVie(365 * 25)
{
    // Corps de la classe
}
