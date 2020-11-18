/*
Programa que imprime el número de números primos que hay entre 1 y 1000
*/

#include <iostream>
#include <vector> 

using namespace std;

bool seeIfAppeared(int current, vector<int> list){
    for (auto i = list.begin(); i != list.end(); ++i) {
        //cout << (current / *i);
        if ((current % *i) == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    // variables
    int inicio = 2;
    int fin;
    vector<int> primos;
    
    // ya bien
    cout << "dame el hasta donde quieres que encuentre: ";
    cin >> fin;

    // vector.push_back(var) agrega al final de la cosa una cosa

    for (int i = inicio; i < fin; i++)
    {
        if (seeIfAppeared(i, primos)){
            primos.push_back(i);
        }
            
    }
    
    cout << "los primos son: " << endl;

    for (auto i = primos.begin(); i != primos.end(); ++i)
        cout << *i << ", ";
    
    cout << endl;
}

