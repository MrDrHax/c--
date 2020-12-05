/*
Lon múltiplos de 3 y 5 que están entre 1 y 10 son: 3,5,6 y 9. La suma de dichos números es igual a 23. 
Haz un programa que imprima la suma de los múltiplos de 3 y 5 que están entre 0 y 1000.
*/

#include <iostream>
#include <vector> 

using namespace std;

int main(){
    vector<int> numeros;
    for (int i = 0; i < 1000; i++)
    {
        if (i % 3 == 0 or i % 5 == 0) numeros.push_back(i);
    }

    int suma = 0;
    
    for (int i = 0; i < numeros.size(); i++)
    {
        suma += numeros[i];
    }

    cout << suma << endl;
}