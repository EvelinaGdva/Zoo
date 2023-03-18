#include "IAnimal.h"

Tigres::Tigres()
{

}

bool Tigres::isMature() const
{
    return age_ >= maturiteSexuelle_;
}

bool Tigres::isReproductible() const
{
    return age_ < finReproduction_ && age_ >= maturiteSexuelle_;
}
