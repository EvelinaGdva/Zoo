#include "IAnimal.h"

IAnimal::IAnimal(string name, char sexe, int age) :
    m_name(name), m_sexe(sexe), m_age(age)
{
    // Corps de la classe
}
IAnimal::IAnimal(string name, int age) :
    m_name(name), m_age(age)
{
}
