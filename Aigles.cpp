#include "Aigles.h"
#include "IAnimal.h"

Aigles::Aigles(string name, char sexe, int age)
    :IAnimal(name, sexe, age),
        m_alimentsParJMale(0.25),
        m_alimentsParJFemelle(0.3),
        m_jrsAvantFaim(10),
        m_maturiteSexuelle(365 * 4),
        m_finDeReprod(365 * 14),
        m_esperanceDeVie(365 * 25)
{
    // Corps de la classe
}

 bool Aigles::isReproductible(int age)
 {
    if (age <= m_finDeReprod && age >= m_maturiteSexuelle) {
      return true;
    } else
         return false;
 }
