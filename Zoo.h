#ifndef ZOO_H
#define ZOO_H

#include <vector>
#include <string>
#include "IAnimal.h"

using namespace std;

class Zoo {
public:
    Zoo(const string& name);
    virtual ~Zoo();
    void addAnimal(IAnimal* animal);
    static IAnimal *getInstance();

    void show() const;
    string getName() const;
    int getNbAnimals() const;
    string getSexe() const;

private:
    string m_name;
    vector<IAnimal*> m_listAnimals;
    static Zoo* m_instance;
    const int MAX_ANIMALS{15}; // nombre maximum d'animaux dans le zoo
};

class Home {
public:
    Home(const string& name);
    string m_name;
    virtual ~Home();


};

#endif // ZOO_H
