#include "Tigres.h"
#include "IAnimal.h"

Tigres::Tigres(string name, char sexe, int age):
    IAnimal(name, sexe, age)
{

};

bool Tigres::isReproductible(int age) const {
    if (age <= m_finDeReprod && age >= m_maturiteSexuelleMale) {
        return true;
    } else if (age <= m_finDeReprod && age >= m_maturiteSexuelleFemelle) {
        return true;
    } else {
        return false;
    }
}
