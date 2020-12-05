/*
Programa que imprime si un número X es natural perfecto. 
Los números naturales perfectos son aquellos cuya suma de sus divisores 
(Ej. El número 6 es natural perfecto porque es igual a la suma de sus divisores 6 = 1+2+3)
*/

#include <iostream>
#include <vector> 

using namespace std;

int main(){
    int x = 6;
    vector<int> lista;

    for (int i = 1; i < x; i++)
    {
        if (x % i == 0) lista.push_back(i);
    }

    int suma = 0;

    for (int i = 0; i < lista.size(); i++)
    {
        suma += lista[i];
    }
    
    if (suma == x) cout << "si es" << endl;
    else cout << "no es" << endl;
}