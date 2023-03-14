#include "IAnimal.h"

IAnimal::~IAnimal()
{
    //dtor
}
void IAnimal::fire()
{
    if(!m_is_dead)
        {
            onFire();
        }
}