/*
rograma las siguientes clases:

    Clase cámara de Video (CV). Una CV tiene marca, modelo, precio, resolución en mega pixeles, 
    Tarjeta de memoria y Procesador Gráfico, fecha de grabación del video

Como puedes ver, una cámara de video tiene como atributos otras clases. Las clases que componen una cámara de video son:

    Tarjeta de Memoria. Las características de una tarjeta de memoria son: 
        capacidad en giga bytes, tipo de tarjeta (“SD”, “miniSD”, “MicroSD”, etc.), 
        marca, modelo, velocidad en GB, fecha de compra
    Procesador Gráfico. Las características de un procesador gráfico son: 
        marca, modelo, velocidad en GB, tipo de tarjeta gráfica (string) y fecha de compra
    La fecha está compusta por día (int), mes (string), año (int)

Tu programa deberá cumplir con los siguientes requisitos técnicos

    Si encuentras que alguna clase que comparte atributos con otra, 
    entonces utiliza la relación de herencia para evitar repeticiones
    Todas las clases deben tener un constructor por default y un constructor con parámetros.
    Todos los atributos deben tener setters y getters.
    Debes crear al menos una instancia de la clase Cámara de Video
    Crea un método que imprima en pantalla todos los atributos de la cámara. 
    Para este método utiliza el nombre imprimirDetallesCámara()

*/
#include "assets/cam.h"

#include<iostream>
#include<string>

using namespace std;

int main(){
    videoCamara cam = videoCamara(4,"diciembre", 2020, "Sonic", "R-1300", 100000, 124);
    cam.cambiarProcesador("Ryzen 5600 XT", "AMD", "5600 XT", 200, cam.getFecha());
    cam.cambiarTarjetaDeMemoria(120, "SD", "Probablemente kingston", "XD-3", 10, cam.getFecha());

    cam.imprimirDetallesCamara();

    // pa que el ram no muera
    cam.deteteAllInfo();
}