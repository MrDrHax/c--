/*
Dada una secuencia de números primos, 
siendo el primer primo el número 2, el segundo primo el 3 y así sucesivamente,  
cuál es el número primo 10,001 de la secuencia?

*/
#include <iostream>
#include <vector> 

using namespace std;

bool checarBinario(int num){
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0) return false;
    }

    return true;
}

int main(){
    int deseados = 10001;
    vector<int> aaaaaaaaaaaaaaa;
    int i = 2;

    while (aaaaaaaaaaaaaaa.size() < deseados){
        if (checarBinario(i)) aaaaaaaaaaaaaaa.push_back(i);
        i++;
    }

    cout << aaaaaaaaaaaaaaa[deseados - 1] << endl;
}