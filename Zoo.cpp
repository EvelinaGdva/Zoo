#include "Zoo.h"
#include <cstdio>

Zoo* Zoo::m_instance = nullptr;
//const int Zoo::MAX_ANIMALS{15};

Zoo::Zoo(const string& name) : m_name(name) {
    if (m_instance == nullptr) {
        m_instance = this;
    }
}

void Zoo::addAnimal(IAnimal *animal) {

}

Zoo::~Zoo() {
    for (auto& animal : m_listAnimals) {
        delete animal;
    }
    m_listAnimals.clear();
}

void Zoo::show() const {
    printf("----- Zoo %s -----\n", m_name.c_str());
    printf("=> Liste des Animaux (%d sur %d):\n", m_listAnimals.size(), MAX_ANIMALS);
    for (const auto& animal : m_listAnimals) {
        printf("- %s de sexe %c, %d ans\n",
               animal->getName().c_str(),
               animal->getSexe(),
               animal->getAge());
    }
    printf("---------------------------\n");
}

string Zoo::getName() const {
    return m_name;
}

int Zoo::getNbAnimals() const {
    return m_listAnimals.size();
}

Home::Home(const string& name) : m_name(name) {}
