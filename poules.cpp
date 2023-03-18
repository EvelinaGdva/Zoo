#include "IAnimal.h"

Poule::Poule()
{

}

bool Poule::isMature() const
{
    return age_ >= maturiteSexuelle_;
}

bool Poule::isReproductible() const
{
    return age_ < finReproduction_ && age_ >= maturiteSexuelle_;
}
