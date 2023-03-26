#include "IAnimal.h"
#include "Coq.h"

Coq::Coq(string name, int age)
    :IAnimal(name, age),
        m_alimentsParJ(0.18),
        m_jrsAvantFaim(2),
        m_maturiteSexuelle(30*6),
        m_finDeReprod(365 * 8),
        m_esperanceDeVie(365 * 15)
{

}

bool Coq::isReproductible(int age) const {
    if (age <= m_finDeReprod && age >= m_maturiteSexuelle) {
        return true;
    } else {
        return false;
    }
}
