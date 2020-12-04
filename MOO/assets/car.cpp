#include "car.h"
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

void motor::print(){
    cout << "Las especificaciones del motor del carro:" << endl;
    cout << "tipo de motor: " << motor::tipo << endl;
    if(motor::tipo == "electrico"){
        cout << "El motor cuenta con " << motor::cilindrosObaterias << "baterias" << endl;
    }else{
        cout << "El motor cuenta con " << motor::cilindrosObaterias << "cilindros" << endl;
    }
    cout << "y cuenta con una potencia de: " << motor::potenciaEnHP << endl;
}

/*
contenedor::contenedor(string Marcadelcarro, string nombredelcarro, int modelodelcarro, int maxveldelcarro){
    contenedor::marca = Marcadelcarro;
    contenedor::nombre = nombredelcarro;
    contenedor::modelo = modelodelcarro;
    contenedor::maxVel = maxveldelcarro;
}*/

void contenedor::print(){
    cout << "Las especificaciones del carro:" << endl;
    cout << "marca del coche : " << contenedor::marca << endl;
    cout << "nombre del coche: " << contenedor::nombre << endl;
    cout << "numero de modelo: " << contenedor::modelo << endl;
    cout << "max vel del coche: " << contenedor::maxVel << endl;
}

cochesitoBruummmmmmmmmmm::cochesitoBruummmmmmmmmmm(string marca, string nombre, string tipoDeMotor, short int cilindroOBateriasDelMotor, int potenciaDelMotor, short int modelo, short int maxVel){
    cochesitoBruummmmmmmmmmm::setMotorTipo(tipoDeMotor);
    cochesitoBruummmmmmmmmmm::setCilindronOBateriasDelMotor(cilindroOBateriasDelMotor);
    cochesitoBruummmmmmmmmmm::setMotorHP(potenciaDelMotor);
    cochesitoBruummmmmmmmmmm::setMarca(marca);
    cochesitoBruummmmmmmmmmm::setNombre(nombre);
    cochesitoBruummmmmmmmmmm::setModelo(modelo);
    cochesitoBruummmmmmmmmmm::setMaxVel(maxVel);
}

void cochesitoBruummmmmmmmmmm::setMarca(string marcaNueva){
    cochesitoBruummmmmmmmmmm::contenedor::marca = marcaNueva;
}
void cochesitoBruummmmmmmmmmm::setNombre(string nombreNuevo){
    cochesitoBruummmmmmmmmmm::contenedor::nombre = nombreNuevo;
}
void cochesitoBruummmmmmmmmmm::setModelo(short int modeloNuevo){
    cochesitoBruummmmmmmmmmm::contenedor::modelo = modeloNuevo;
}
void cochesitoBruummmmmmmmmmm::setMaxVel(short int maxVelNueva){
    cochesitoBruummmmmmmmmmm::contenedor::maxVel = maxVelNueva;
}
void cochesitoBruummmmmmmmmmm::setMotorTipo(string tipoNuevo){
    cochesitoBruummmmmmmmmmm::motor::tipo = tipoNuevo;
}
void cochesitoBruummmmmmmmmmm::setCilindronOBateriasDelMotor(short int cilindrosObateriasNuevas){
    cochesitoBruummmmmmmmmmm::motor::cilindrosObaterias = cilindrosObateriasNuevas;
}
void cochesitoBruummmmmmmmmmm::setMotorHP(int potenciaEnHPNueva){
    cochesitoBruummmmmmmmmmm::motor::potenciaEnHP = potenciaEnHPNueva;
}

void cochesitoBruummmmmmmmmmm::print(){
    cochesitoBruummmmmmmmmmm::contenedor::print();
    cochesitoBruummmmmmmmmmm::motor::print();
}