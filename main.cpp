#include "aigles.h"
#include "IAnimal.h"
#include "poules.h"
#include "tigres.h"
#include "Zoo.h"

using nomespace std;

int main() {
    Zoo* zoo("Zoo de la Montagne");

    zoo->addAnimal(new Tigre("T1"));
    zoo->addAnimal(new Tigre("T2"));
    zoo->addAnimal(new Tigre("T3"));
    Poule* p1 = new Poule("P1");
    zoo->addAnimal(P1);
    zoo->addAnimal(new Poule("P2"));
    zoo->addAnimal(new Poule("P3"));
    zoo->addAnimal(new Poule("P4"));
    zoo->addAnimal(new Aigle("A1"));
    zoo->addAnimal(new Aigle("A2"));
    zoo->addAnimal(new Aigle("A3"));


    zoo->fire();
    p1->Dead();
    zoo->fire();

    Zoo::getInstance()->fire();

    return 0;

    //créer le zoo
    //créer les animaux
    //mettre les animaux dans le zoo zoo.add(P1)
    //le feu dans le zoo zoo.fire()

}
