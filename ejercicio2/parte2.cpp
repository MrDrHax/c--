/*
Escribe una función que recibe un número entero “n”. 
La función deberá leer del usuario “n” números 
y al final deberá imprimir y devolver cuál fue el número menor que introdujo el usuario.

*/

#include <iostream>
#include <vector> 

using namespace std;

int main()
{
    int n;
    cout << "cantidades: ";
    cin >> n;

    int max;
    int input;

    cout<<"numeros:";
    cin >> max;

    for (int i = 1; i < n; i++)
    {
        cin >> input;

        if (input < max) max = input;
    }

    cout << "min=" << max << endl;
}

