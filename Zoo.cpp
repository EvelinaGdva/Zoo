#include "Zoo.h"

Zoo::~Zoo()
{
    //dtor
}
void Zoo::addAnimal(IAnimal*animal)
{
    listAnimals.push_back(animal);
}

void Zoo::show() const {
    printf("----- Zoo %s -----\n"
           "=> Age: %s\n"
           "=> Stock Aliment:\n"
           "   -> Graines: %.2fkg\n"
           "   -> Viande: %.2fkg\n"
           "=> Budget: %.2f$\n"
           "=> Nombre d'Enclos: %i\n"
           "=> Liste des Enclos:\n%s"
           "---------------------------\n",
           m_name.c_str(),
           dateConverter(m_days).c_str(),
           m_stockAliment[0]->getQuantite(),
           m_stockAliment[1]->getQuantite(),
           m_budget->getBudget(),
           getNbrOfEnclos(),
           listHabitats().c_str()
    );
}
