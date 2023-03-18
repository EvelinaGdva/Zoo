#ifndef IANIMAL_H
#define IANIMAL_H
#include<vector>
#include<string>

using namespace std;

class Zoo
{
    string m_name;
    vector<IAnimal> listAnimals;
    static Zoo* m_instance = nullptr;
    public;
        Zoo(string m_name):m_name(name){
            if (m_instance = nullptr) {
                m_instance = this;
            }
        }
        virtual ~Zoo();
        void addAnimal(IAnimal*animal);
        static Zoo* getInstance(){
            return m_instance;
        }

};

#endif // IANIMAL_H
