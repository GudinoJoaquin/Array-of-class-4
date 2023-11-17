#include<iostream>
#include<string>
#include "Zoo.h"
using namespace std;

//a.      Mostrar la cantidad de animales de la Jaula 5 cuyo peso sea menor a 3 kg.
//b.      Listar cantidad de animales de tipo felinos que están entre las jaulas 2 a 5.
//c.      Listar el nombre del animal de la Jaula 4 cuyo peso sea menor a 120.

void mostrar(ZooAnimal* zoo);

int main(){

    ZooAnimal* zoo = new ZooAnimal[3];

    //zoo[x] = ZooAnimal(id, nombre, caja, tipo, peso)
    zoo[0] = ZooAnimal(4, "Felipe III", 5, 3, 2);
    zoo[1] = ZooAnimal(5, "Mahatma Gandhi", 3, 1, 140);
    zoo[2] = ZooAnimal(3, "Francisco", 4, 2, 110);

    mostrar(zoo);

    system("pause");
    return 0;
}

void mostrar(ZooAnimal* zoo){

    cout<<"Animales de la jaula 5 con peso mayor a 3kg"<<endl;
    for(int i = 0 ; i < 3 ; i++){
        if(zoo[i].getCageNumber() == 5 && zoo[i].getWeight() < 3){
            cout<<"Id: "<<zoo[i].getIdAnimal()<<" ";
            cout<<"Nombre: "<<zoo[i].getName()<<" ";
            cout<<"Caja: "<<zoo[i].getCageNumber()<<" ";
            cout<<"Tipo: "<<zoo[i].getIdTypeAnimal()<<" ";
            cout<<"Peso: "<<zoo[i].getWeight()<<"kg ";
        }
    }

    cout<<endl;
    cout<<"Felinos entre las jaulas 2 y 5"<<endl;

    for(int i = 0 ; i < 3 ; i++){
        if(zoo[i].getCageNumber() >= 2 && zoo[i].getCageNumber() <= 5 && zoo[i].getIdTypeAnimal() == 1){
            cout<<"Id: "<<zoo[i].getIdAnimal()<<" ";
            cout<<"Nombre: "<<zoo[i].getName()<<" ";
            cout<<"Caja: "<<zoo[i].getCageNumber()<<" ";
            cout<<"Tipo: "<<zoo[i].getIdTypeAnimal()<<" ";
            cout<<"Peso: "<<zoo[i].getWeight()<<"kg ";
        }
    }

    cout<<endl;
    cout<<"Animales de la jaula 4 con peso menor a 120kg"<<endl;

    for(int i = 0 ; i < 3 ; i++){
        if(zoo[i].getCageNumber() == 4 && zoo[i].getWeight() < 120){
            cout<<"Id: "<<zoo[i].getIdAnimal()<<" ";
            cout<<"Nombre: "<<zoo[i].getName()<<" ";
            cout<<"Caja: "<<zoo[i].getCageNumber()<<" ";
            cout<<"Tipo: "<<zoo[i].getIdTypeAnimal()<<" ";
            cout<<"Peso: "<<zoo[i].getWeight()<<"kg ";
        }
    }
    cout<<endl;
}