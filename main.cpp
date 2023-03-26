#include "Aigles.h"
#include "IAnimal.h"
#include "Poules.h"
#include "Tigres.h"
#include "Coq.h"
#include "Zoo.h"

using namespace std;

int main() {
    Zoo* zoo = (Zoo *) ("Zoo de dingue"); //creation zoo

    zoo->addAnimal(new Tigres("Jean michel", "M", 0));//creer des animaux
    zoo->addAnimal(new Tigres("Marine", 'F', 0));
    zoo->addAnimal(new Tigres("Lisa", 'F', 0));
    zoo->addAnimal(new Tigres("Marco", "H", 0))

    zoo->addAnimal(new Poules("Elisa", 0));
    zoo->addAnimal(new Poules("Sarah",0));
    zoo->addAnimal(new Poules("Romane", 0));
    zoo->addAnimal(new Poules("June", 0));
    zoo->addAnimal(new Poules("Sophie",0));
    zoo->addAnimal(new Poules("Jenn", 0));
    zoo->addAnimal(new Poules("Jasinthe", 0));
    zoo->addAnimal(new Poules("Rose",0));
    zoo->addAnimal(new Poules("Myreille", 0));
    zoo->addAnimal(new Poules("Sandrine", 0));

    zoo->addAnimal(new Aigles("Ricou", 'M', 0));
    zoo->addAnimal(new Aigles("Joe", 'M', 0));
    zoo->addAnimal(new Aigles("Kate", 'F', 0));
    zoo->addAnimal(new Aigles("Love", 'F', 0));

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
