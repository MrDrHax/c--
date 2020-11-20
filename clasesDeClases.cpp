#include<string>
#include<iostream>

using namespace std;

class persona
{
    public: // all of this will be public, and anyone can acces it
    int altura;
    int peso;

    string nombre;

    persona(string nombreDeseado = "DEFAULT", int alturaDeseada = 2000, int pesoDeseado = 20000){
        nombre = nombreDeseado;
        altura = alturaDeseada;
        peso = pesoDeseado;
    }

    void printTheStats(){
        // eyo mate, print the stats m8, dont be selfish you
        cout << "Nombre de la persona: " << nombre << endl << "Altura de mi persona: " << altura << endl << "Peso de mi persona: " << peso << endl; 
    }

    private: // cosas solo accesibles desde dentro (todo es privado por default)
    string numeroMuySecretoQueNoQuieroQueNadieMeDiga = "10203834108547";

    protected: // permisos puestos (quien sabe como)
    string myDiamond = "my precious BITCH";
};

int main(){
    persona LaPersonaFea = persona("Fred", 100, 1000000);
    persona LaPersonaBella = persona("Alex", 200, 5700);

    LaPersonaFea.printTheStats();
    LaPersonaBella.printTheStats();
}