/*
Escribe una función que recibe un String de ceros y unos (string binario). 
La función revisa que el string sólo contenga ceros y unos. 
La función convierte el string binario en un número decimal
*/

#include <iostream>
#include <vector> 
#include <string>

using namespace std;

bool checarSISI(string achecar){
    for (int i = 0; i < achecar.size(); i++)
    {
        if (!(achecar[i] == '0' or achecar[i] == '1')) return true;
    }
    
    cout << "cosas validas" << endl;
    return false;
}

int convertirADecimal(string coso){
    int finalCoso = 0;
    for (int  i = 0; i < coso.size(); i++)
    {
        finalCoso *= 2;
        if (coso[i] == '1') finalCoso += 1;
    }
    return finalCoso;
}

int main(){
    string cosa;
    cin >> cosa;

    if (checarSISI(cosa)) return 0;

    cout << "tu num es: " << convertirADecimal(cosa) << endl;
}
