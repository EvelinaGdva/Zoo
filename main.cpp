#include "aigles.h"
#include "IAnimal.h"
#include "poules.h"
#include "tigres.h"
#include "coq.h"
#include "Zoo.h"

using namespace std;

int main() {
    Zoo* zoo = ("Zoo de dingue");//creer un zoo

    zoo->addAnimal(new Tigre("Jean Michel", 'M', 0));//creer des annimaux
    zoo->addAnimal(new Tigre("Marine", 'F', 0));
    zoo->addAnimal(new Tigre("Lisa", 'F', 0));

    zoo->addAnimal(new Poule("Elisa", 0));
    zoo->addAnimal(new Poule("Sarah",0));
    zoo->addAnimal(new Poule("Romane", 0));

    zoo->addAnimal(new Aigle("Ricou", 'M', 0));
    zoo->addAnimal(new Aigle("Joe", 'M', 0));
    zoo->addAnimal(new Aigle("Kate", 'F', 0));

    zoo->addAnimal(new Coq("Jonathan", 0));

    Home* home = new Home("La maison des tigres");//creer les habitats, mettre les annimaux dans les habitats
    home->addAnimal(zoo->getAnimal("Jean Michel"));
    home->addAnimal(zoo->getAnimal("Marine"));
    home->addAnimal(zoo->getAnimal("Lisa"));

    Home* home2 = new Home("La maison des aigles");
    home2->addAnimal(zoo->getAnimal("Ricou"));
    home2->addAnimal(zoo->getAnimal("Joe"));
    home2->addAnimal(zoo->getAnimal("Kate"));

    Home* home3 = new Home("La maison du poulet");
    home3->addAnimal(zoo->getAnimal("Elisa"));
    home3->addAnimal(zoo->getAnimal("Sarah"));
    home3->addAnimal(zoo->getAnimal("Romane"));
    home3->addAnimal(zoo->getAnimal("Jonathan"));

    zoo->addHome(home);//mettre des habitats dans le zoo
    zoo->addHome(home2);
    zoo->addHome(home3);


    return 0;
}
