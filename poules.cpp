#include "IAnimal.h"

Poule::Poule()
{

}

void Poule::onFire()
{
    if (!m_underwater) { //si pas sous l'eau
        cout<<"oops"<<endl;
        m_underwater = true;
        return;
    }
    cout<<"ouf"<<endl;
}
