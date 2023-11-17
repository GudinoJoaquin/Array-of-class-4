#ifndef Zoo_H
#define Zoo_H
#include <iostream>
#include <string>
using namespace std;

class ZooAnimal {
private:
    int idAnimal;
    string name;
    int cageNumber;
    int idTypeAnimal;  //1 felinos 2 aves 3 reptiles etc
    int weight;

public:
    ZooAnimal(int animalId, string nombre, int numberCage, int animalTypeId, int peso) {
        idAnimal = animalId;
        name = nombre;
        cageNumber = numberCage;
        idTypeAnimal = animalTypeId;
        weight = peso;
    }

    ZooAnimal() { };

    int getIdAnimal() { return idAnimal; }
    string getName() { return name; }
    int getCageNumber() { return cageNumber; }
    int getIdTypeAnimal() { return idTypeAnimal; }
    int getWeight() { return weight; }
};

#endif