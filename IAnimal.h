#ifndef IANIMAL_H
#define IANIMAL_H

#include <string>

using namespace std;

class IAnimal
{
public:
    IAnimal(string name, char sexe, int age);
    virtual ~IAnimal() = default;
    virtual void manger(float quantite) = 0;
    virtual void dormir() = 0;
private:
    string m_name;
    char m_sexe;
    int m_age;
};

#endif // IANIMAL_H
