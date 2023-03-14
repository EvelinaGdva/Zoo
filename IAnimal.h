#ifndef IANIMAL_H
#define IANIMAL_H

using namespace std;

class IAnimal
{
    string m_name;
    bool m_is_dead = false;
public:
    IAnimal(string m_name):m_name(name)
    virtual ~IAnimal();
    virtual void onFire()=0;
    void fire();
    void isDead() {
        m_is_dead = true;
    }
};

#endif // IANIMAL_H
