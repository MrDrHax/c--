#include "cam.h"

#include<iostream>
#include<string>

using namespace std;


void fecha::print(){
    cout << "   fecha:" << endl;
    cout << "   el " << fecha::dia << " de " << fecha::mes << " del " << fecha::year << endl;
}

fecha::fecha(int dia, string mes, int year){
    fecha::dia = dia;
    fecha::mes = mes;
    fecha::year = year;
}

// conternedores ------------------------------------------------------------------------------------------------------
contenedor::contenedor(){
    //nada
}
contenedor::contenedor(string tipo, string marca, string modelo, int velocidadGB, fecha* fechaDeCompra){
    contenedor::setTipo(tipo);
    contenedor::setMarca(marca);
    contenedor::setModelo(modelo);
    contenedor::setVelocidadGB(velocidadGB);
    contenedor::setFecha(fechaDeCompra);
}  

void contenedor::print(){
    cout << "   tipo:" << contenedor::tipo << endl;
    cout << "   marca:" << contenedor::marca << endl;
    cout << "   modelo:" << contenedor::modelo << endl;
    cout << "   Velocidad en GB:" << contenedor::velocidadGB << endl;
    contenedor::fechaDeCompra->print();
}

void contenedor::setTipo(string tipo){
    contenedor::tipo = tipo;
}
void contenedor::setMarca(string marca){
    contenedor::marca = marca;
}
void contenedor::setModelo(string modelo){
    contenedor::modelo = modelo;
}
void contenedor::setVelocidadGB(int velocidadGB){
    contenedor::velocidadGB = velocidadGB;
}
void contenedor::setFecha(fecha *fechaDeCompra){
    contenedor::fechaDeCompra = fechaDeCompra;
}

string contenedor::getTipo(){
    return contenedor::tipo;
}
string contenedor::getMarca(){
    return contenedor::marca;
}
string contenedor::getModelo(){
    return contenedor::modelo;
}
int contenedor::getVelocidadGB(){
    return contenedor::velocidadGB;
}
fecha contenedor::getFecha(){
    return *contenedor::fechaDeCompra;
}

// tarjeta de memeoria ------------------------------------------------------------------------------------------------------

tarjetaDeMemoria::tarjetaDeMemoria(){
    // aqui nada
}
tarjetaDeMemoria::tarjetaDeMemoria(int capacidadEnGB, string tipo, string marca, string modelo, int velocidadGB, fecha* fechaDeCompra){
    tarjetaDeMemoria::capacidadEnGB = capacidadEnGB;
    tarjetaDeMemoria::contenedor::setTipo(tipo);
    tarjetaDeMemoria::contenedor::setMarca(marca);
    tarjetaDeMemoria::contenedor::setModelo(modelo);
    tarjetaDeMemoria::contenedor::setVelocidadGB(velocidadGB);
    tarjetaDeMemoria::contenedor::setFecha(fechaDeCompra);
}

void tarjetaDeMemoria::print(){
    tarjetaDeMemoria::contenedor::print();
    cout << "   capacidad de la tarjeta (GB): " << tarjetaDeMemoria::capacidadEnGB << endl << endl;
}

// procesador ------------------------------------------------------------------------------------------------------

procesador::procesador(){
    // nada
}
procesador::procesador(string tipo, string marca, string modelo, int velocidadGB, fecha* fechaDeCompra){
    procesador::contenedor::setTipo(tipo);
    procesador::contenedor::setMarca(marca);
    procesador::contenedor::setModelo(modelo);
    procesador::contenedor::setVelocidadGB(velocidadGB);
    procesador::contenedor::setFecha(fechaDeCompra);
}

void procesador::print(){
    procesador::contenedor::print();
    cout << endl;
}

// cam --------------------------------------------------------------------------------------------------------------------------------

videoCamara::videoCamara(){
    //nada
}
videoCamara::videoCamara(int dia, string mes, int year, string marca, string modelo, float precio, int resolucion){
    videoCamara::fechaDeCreacion = new fecha(dia, mes, year);
    videoCamara::marca = marca;
    videoCamara::modelo = modelo;
    videoCamara::precio = precio;
    videoCamara::resolucion = resolucion;
}

void videoCamara::cambiarProcesador(string tipo, string marca, string modelo, int velocidadGB, fecha* fechaDeCompra){
    videoCamara::procesadorUsado = new procesador(tipo, marca, modelo, velocidadGB, fechaDeCompra);
}
void videoCamara::cambiarTarjetaDeMemoria(int capacidadEnGB, string tipo, string marca, string modelo, int velocidadGB, fecha* fechaDeCompra){
    videoCamara::tarjetaDeMemoriaUsada = new tarjetaDeMemoria(capacidadEnGB, tipo, marca, modelo, velocidadGB, fechaDeCompra);
}

void videoCamara::imprimirDetallesCamara(){
    cout << "Detalles de la camara:" << endl;
    cout << "Fecha de creacion: " << endl; videoCamara::fechaDeCreacion->print(); cout << endl;
    cout << "Marca: " << videoCamara::marca << endl;
    cout << "Modelo: " << videoCamara::modelo << endl;
    cout << "Resolucion (en MP): " << videoCamara::resolucion << endl;

    cout << "Procesador usado:" << endl;
    videoCamara::procesadorUsado->print();
    cout << "Tarjeta de memoria incluida:" << endl;
    videoCamara::tarjetaDeMemoriaUsada->print();

    cout << "Precio: $" << videoCamara::precio << endl;
}

void videoCamara::deteteAllInfo(){
    delete videoCamara::fechaDeCreacion;
    delete videoCamara::procesadorUsado;
    delete videoCamara::tarjetaDeMemoriaUsada;
}

fecha *videoCamara::getFecha(){
    return videoCamara::fechaDeCreacion;
}