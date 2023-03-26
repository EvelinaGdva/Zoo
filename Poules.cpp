#include "IAnimal.h"
#include "Poules.h"

Poules::Poules(string name, int age)
    :IAnimal(name, age),
        m_alimentsParJ(),
        m_jrsAvantFaim(10),
        m_maturiteSexuelle(365 * 4),
        m_finDeReprod(365 * 14),
        m_esperanceDeVie(365 * 25)

{

}

bool Poules::isReproductible(int age) const
{
    if (age <= m_finDeReprod && age >= m_maturiteSexuelle) {
        return true;
    } else
        return false;
}