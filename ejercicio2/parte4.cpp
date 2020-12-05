/*
Escribe una función que reciba como parámetro un número entero. 
La función convierte el número en un número binario. 
La función devuelve el número binario
*/

#include <iostream>
#include <vector> 
#include <string>

using namespace std;

int main(){
    int numa;
    cout << "pasame el num: ";
    cin >> numa;

    vector<int> lacosa;
    
    while (numa > 1){
        lacosa.push_back((numa % 2));
        numa /= 2;
    }
    lacosa.push_back(1);

    for (int i = lacosa.size() - 1; i >= 0; i--)
    {
        cout << lacosa[i];
    }
    cout << endl;
}