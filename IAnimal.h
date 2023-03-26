#ifndef IANIMAL_H
#define IANIMAL_H

#include <string>

using namespace std;

class IAnimal
{
public:
    IAnimal(string name, char sexe, int age);
    virtual ~IAnimal() = default;

    string getName() const { return m_name; }
    char getSexe() const { return m_sexe; }
    int getAge() const { return m_age; }

    virtual void rugir();
private:
    string m_name;
    char m_sexe;
    int m_age;
    virtual void manger(float quantite) = 0;
    virtual void dormir() = 0;
};

#endif // IANIMAL_H
