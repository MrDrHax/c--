/*
Programa que imprime cuántos números circulares primos hay debajo de 1000000
*/

#include <iostream>
#include <string> 
#include <vector>

using namespace std;

bool sacarPunto(string x){
    string sudo;
    vector<int> possibleCombos;


    for (int i = 0; i < x.size(); i++)
    {
        possibleCombos.push_back(stoi(x));

        sudo = "";

        for (int i = 1; i < x.size(); i++)
        {
            sudo = sudo + x[i];
        }
        
        x = sudo + x[0];
    }
    
    bool itIsNot = false;

    for (int i = 0; i < possibleCombos.size(); i++)
    {
        for (int b = 2; b < possibleCombos[i]; b++)
        {
            if (possibleCombos[i] % b == 0){
                itIsNot = true;
                break;
            }
        }
        
        if (itIsNot) break;
    }

    return itIsNot;
}

int main(){
    int hasta = 1000000;
    int cantidad = 0;
    
    for (int i = 0; i < hasta; i++)
    {
        if (sacarPunto(to_string(i))) cantidad++;
    }
    
    cout << cantidad << endl;
}