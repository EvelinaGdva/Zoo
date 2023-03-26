#ifndef VIANDE_H
#define VIANDE_H
#include <string>
#include "aliment.h"

using namespace std;

class Viande: public Aliment{
public:
    Viande(string name);
};


#endif //VIANDE_H
