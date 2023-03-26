#include "Zoo.h"
#include <cstdio>


//Zoo::Zoo(const string& name) : m_name(name) {
  //  if (m_instance == nullptr) {
    //    m_instance = this;

Zoo::Zoo(const string &name) {}

Zoo::~Zoo() {
    //dstor
}

void Zoo::addAnimal(IAnimal* animal) {
    //if (m_listAnimals.size() < MAX_ANIMALS) {
        m_listAnimals.push_back(animal);
    } //else {
        ////     animal->getName().c_str(),
            //   m_name.c_str(),
              // MAX_ANIMALS);


void Zoo::show() const {
    printf("----- Zoo %s -----\n"
           "=> Liste des Animaux (%d sur %d):\n",
           m_name.c_str(),
           m_listAnimals.size();


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

Home::Home(const string& name) {

}
