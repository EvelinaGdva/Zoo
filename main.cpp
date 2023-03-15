#include "aigles.h"
#include "IAnimal.h"
#include "poules.h"
#include "tigres.h"
#include "Zoo.h"

using nomespace std;

int main() {
    Zoo* zoo("Zoo de la Montagne");//creer un zoo

    zoo->addAnimal(new Tigre("Jean Michel", 'M', 0));//creer des annimaux
    zoo->addAnimal(new Tigre("Marine", 'F', 0));
    zoo->addAnimal(new Tigre("Lisa", 'F', 0));

    zoo->addAnimal(new Poule("Elisa", 0));
    zoo->addAnimal(new Poule("Sarah",0));
    zoo->addAnimal(new Poule("Romane", 0));

    zoo->addAnimal(new Aigle("Ricou", 'M', 0));
    zoo->addAnimal(new Aigle("Joe", 'M', 0));
    zoo->addAnimal(new Aigle("Kate", 'F', 0));

    zoo->addAnimal(new Coq("Jonathan", 0))

    zoo->addHome(home);//creer des habitats
    zoo->addHome(home2);
    zoo->addHome(home3);

    Home* home = new Home("La maison des tigres");//mettre les annimaux dans les habitats
    home->addAnimal(Jean Michel, Marine, Lisa);
    Home* home2 = new Home("La maison des aigles");
    home->addAnimal(Ricou, Joe, Kate);
    Home *home3 = new Home("La maison du poulet");
    home->addAnimal(Elisa, Sarah, Romane, Jonathan);

    return 0;
}
