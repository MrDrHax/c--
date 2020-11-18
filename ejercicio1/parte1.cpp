/*
Realiza un programa en C++ que imprime “Sí es bisiesto” o “No es bisiesto” 
si un valor numérico (variable int) 
que representa el valor de un año es bisiesto o no (tu asigna directamente el valor del año: int anio = 2020; )
*/

#include <iostream>

using namespace std;

int main()
{
    int year;
    cin >> year;
    if (year % 4 == 0) cout << "tu año es bisiestro";
    else cout << "tu año no es bisiestro" << endl;
}