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

contenedor::contenedor(string Marcadelcarro, string nombredelcarro, int modelodelcarro, int maxveldelcarro){
    contenedor::marca = Marcadelcarro;
    contenedor::nombre = nombredelcarro;
    contenedor::modelo = modelodelcarro;
    contenedor::maxVel = maxveldelcarro;
}

void contenedor::print(){
    cout << "Las especificaciones del carro:" << endl;
    cout << "marca del coche : " << contenedor::marca << endl;
    cout << "nombre del coche: " << contenedor::nombre << endl;
    cout << "numero de modelo: " << contenedor::modelo << endl;
    cout << "max vel del coche: " << contenedor::maxVel << endl;
}

cochesitoBruummmmmmmmmmm::cochesitoBruummmmmmmmmmm(string tipoDeMotor, short int cilindroOBateriasDelMotor, int potenciaDelMotor){
    cochesitoBruummmmmmmmmmm::setMotorTipo(tipoDeMotor);
    cochesitoBruummmmmmmmmmm::setCilindronOBateriasDelMotor(cilindroOBateriasDelMotor);
    cochesitoBruummmmmmmmmmm::setMotorHP(potenciaDelMotor);
}

void cochesitoBruummmmmmmmmmm::setMarca(string marcaNueva){

}
void cochesitoBruummmmmmmmmmm::setNombre(string nombreNuevo){

}
void cochesitoBruummmmmmmmmmm::setModelo(short int modeloNuevo){

}
void cochesitoBruummmmmmmmmmm::setMaxVel(short int maxVelNueva){

}
void cochesitoBruummmmmmmmmmm::setMotorTipo(string tipoNuevo){

}
void cochesitoBruummmmmmmmmmm::setCilindronOBateriasDelMotor(short int cilindrosObateriasNuevas){

}
void cochesitoBruummmmmmmmmmm::setMotorHP(int potenciaEnHPNueva){

}