/*
Programa las siguientes clases son sus respectivos atributos:

    Carro Eléctrico. Un carro eléctrico tiene marca, nombre, modelo(año), velocidad máxima, motor eléctrico
    Carro Normal. Un carro manual tiene marca, nombre, modelo(año), velocidad máxima y motor normal

Las dos clases anteriores tienen motores que se crean cuando creas el vehículo (constructor). Los dos motores son dos clases. Los atributos de las clases motor son:

    Motor eléctrico. Un motor eléctrico tiene potencia en hp’s, número de baterías.
    Motor normal. Un motor normal tiene potencia en hp’s, número de cilíndros.

Si encuentras que alguna clase comparte atributos con otra, entonces utiliza la relación de herencia para evitar repeticiones

Todos los atributos deben tener setters y getters. Debes crear al menos una instancia de carro eléctrico y una de carro normal.

Todas las clases deben tener un constructor por default y un constructor con parámetros.
*/

#include<iostream>
#include<string>
#include<fstream>

#pragma once

using namespace std;

class motor{
protected:
    string tipo;
    short int cilindrosObaterias;
    int potenciaEnHP;

    void print();
};

class contenedor{
protected:
    string marca;
    string nombre;
    short int modelo;
    short int maxVel;

    contenedor();
    contenedor(string Marcadelcarro, string nombredelcarro, int modelodelcarro, int maxveldelcarro);
    void print();
};

class cochesitoBruummmmmmmmmmm: public contenedor, public motor{
    cochesitoBruummmmmmmmmmm(string tipoDeMotor, short int cilindroOBateriasDelMotor, int potenciaDelMotor);

    void setMarca(string marcaNueva);
    void setNombre(string nombreNuevo);
    void setModelo(short int modeloNuevo);
    void setMaxVel(short int maxVelNueva);
    void setMotorTipo(string tipoNuevo);
    void setCilindronOBateriasDelMotor(short int cilindrosObateriasNuevas);
    void setMotorHP(int potenciaEnHPNueva);

public:
    string getMarca();
    string getNombre();
    short int getModelo();
    short int getMaxVel();
    string getMotorTipo();
    short int getCilindronOBateriasDelMotor();
    int getMotorHP();

    void print();
};