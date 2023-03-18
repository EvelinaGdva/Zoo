#include "IAnimal.h"

Coq::Coq()
{

}

bool Coq::isMature() const
{
    return age_ >= maturiteSexuelle_;
}

bool Coq::isReproductible() const
{
    return age_ < finReproduction_ && age_ >= maturiteSexuelle_;
}
