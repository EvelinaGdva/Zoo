#include "Zoo.h"

Zoo::~Zoo()
{
    //dtor
}
void Zoo::addAnimal(IAnimal*animal)
{
    listAnimals.push_back(animal);
}

