/*
Programa que indica si un valor X es un número circular primo. 
Los números circulares primos son aquellos que son números primos y que todas las rotaciones de dicho número también son primos. 
Ej. El número 197 es circular primo pq es primo y su primer rotación 971 también es primo, su segunda rotación 719 también es primo.
*/

#include <iostream>
#include <string> 
#include <vector>

using namespace std;

int main(){
    string x = "71";
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

    if (itIsNot) cout << "nah bro" << endl;
    else cout << "yas m8" << endl;
}