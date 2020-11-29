#include"articulos/articulos.h"

#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

int main(){
    listaDeArticulos * listaVirgen = new listaDeArticulos();
    listaDeArticulos * listaSupper = new listaDeArticulos(false);

    cout << "\u001b[31m Bienvenido usuario, a continuacion estan todos los productos que vendemos:" << endl;

    listaVirgen->print();

    string input;
    int cantidad;

    while (true){
        cout << "\u001b[93mQue deseas agregar al carrito? \u001b[32m" << endl;
        cin >> input;
        if (input == "exit"){
            break;
        }

        else if (input == "lista"){
            listaSupper->print();
        }

        else if (input == "vaciar"){
            delete listaSupper;
            listaSupper = new listaDeArticulos(false);
        }
        
        else if (input == "Checkout"){
            Checkout();
        }

        else{
            cout << "\u001b[93mCual es la cantidad que gustas agregar?\u001b[32m";
            cin >> cantidad;

            listaSupper->addArticle(input, cantidad, listaVirgen);

            cout << "\u001b[97mAgregado con exito!" << endl;
        }
            
    }

    cout << "\u001b[31m Gracias por comprar con nosotros :3 \u001b[30m" << endl;

    delete listaVirgen;
    delete listaSupper;
}
