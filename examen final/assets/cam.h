#include<iostream>
#include<string>

#pragma once

using namespace std;

class fecha{
    protected:
    int dia;
    string mes;
    int year; // no tengo n con cosita arriba en mi teclado, asi que en ingles

    public:
    void print();
    fecha(int dia, string mes, int year);
    fecha();
};

class contenedor{
    public:
    contenedor();
    contenedor(string tipo, string marca, string modelo, int velocidadGB, fecha* fechaDeCompra);  
    protected:
    string tipo;
    string marca;
    string modelo;
    int velocidadGB;
    fecha* fechaDeCompra;

    void print();

    void setTipo(string tipo);
    void setMarca(string marca);
    void setModelo(string modelo);
    void setVelocidadGB(int velocidadGB);
    void setFecha(fecha *fechaDeCompra);

    string getTipo();
    string getMarca();
    string getModelo();
    int getVelocidadGB();
    fecha getFecha();

    void removerComponentes();
};

/*
    Tarjeta de Memoria. Las características de una tarjeta de memoria son: 
        capacidad en giga bytes, tipo de tarjeta (“SD”, “miniSD”, “MicroSD”, etc.), 
        marca, modelo, velocidad en GB, fecha de compra
    Procesador Gráfico. Las características de un procesador gráfico son: 
        marca, modelo, velocidad en GB, tipo de tarjeta gráfica (string) y fecha de compra
*/

class tarjetaDeMemoria: public contenedor{
    public:
    tarjetaDeMemoria();
    tarjetaDeMemoria(int capacidadEnGB, string tipo, string marca, string modelo, int velocidadGB, fecha* fechaDeCompra);
    
    void print();

    protected:
    int capacidadEnGB;
};

class procesador: public contenedor{
    public:
    procesador();
    procesador(string tipo, string marca, string modelo, int velocidadGB, fecha* fechaDeCompra);

    void print();
};

class videoCamara{
    public:
    videoCamara();
    videoCamara(int dia, string mes, int year, string marca, string modelo, float precio, int resolucion);

    private:
    fecha *fechaDeCreacion;
    procesador *procesadorUsado;
    tarjetaDeMemoria *tarjetaDeMemoriaUsada;

    string marca;
    string modelo;
    float precio;
    int resolucion;

    public:
    void cambiarProcesador(string tipo, string marca, string modelo, int velocidadGB, fecha* fechaDeCompra);
    void cambiarTarjetaDeMemoria(int capacidadEnGB, string tipo, string marca, string modelo, int velocidadGB, fecha* fechaDeCompra);

    void imprimirDetallesCamara();
    fecha * getFecha();

    void deteteAllInfo();
};