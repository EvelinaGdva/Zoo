#ifndef ALIMENT_H
#define ALIMENT_H
#include <string>

using namespace std;

enum class FoodType{Viande, Graines};

class Aliment {
private:
    string m_nom{};
    float m_prix{};
    float m_quantite{};
    FoodType m_foodType{};
public:
    Aliment(string nom, float prixKg, FoodType foodType);
    string getNom();
    float getPrixKg();
    float getQuantite();
};

#endif  //ALIMENT_H
