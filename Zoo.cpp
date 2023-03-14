#include "Zoo.h"

Zoo::~Zoo()
{
    //dtor
}
void Zoo::addAnimal(IAnimal*animal)
{
    listAnimals.push_back(animal);
}
void Zoo::fire()
{
    for(int i=0; i<listAnimals.size();i++){
        listAnimals[i]->fire();
    }
}
