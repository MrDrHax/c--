/*

    Invierte un número de 6 cifras. Ej. El número a invertir es 350039 y el resultado es 930053

*/

#include <iostream>
#include <string> 

using namespace std;

int main(){
    string numero = "350039";

    for (int i = numero.size() - 1; i >= 0; i--)
    {
        cout << numero[i];
    }

    cout<< endl;
}