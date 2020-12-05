/*
Escribe una función que verifica si un número es palíndromo o no. 
Los números palíndromos son aquellos que se leen igual de izquierda a derecha que de derecha a izquierda. 
        Ejemplos: los siguientes números se leen igual de izquierda a derecha que de derecha a izquierda
            1111
            316613
            1212121
            1234321
*/

#include <iostream>
#include <vector> 
#include <string>

using namespace std;

int main(){
    int cosa;
    cin >> cosa;

    string check = to_string(cosa);

    string holo = "";

    for (int i = check.size() - 1; i >= 0; i--)
    {
        holo = holo + check[i];
    }

    if (holo == check){
        cout << "lol si es" << endl;
    }
    else
    {
        cout << "nel Pastel" << endl;
    }
}