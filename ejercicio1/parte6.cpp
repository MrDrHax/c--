/*
Crea un programa que imprima los dígitos (de manera individual) de un número 5 cifras
*/

#include <iostream>
#include <string> 

using namespace std;

int main(){
    string numero = "12345";

    for (int i = 0; i < numero.size(); i++)
    {
        cout << numero[i] << endl;
    }
}