#include <iostream>

using namespace std;

void duplicateIntValues(int * pointer, int size){
    for (int i = 0; i < size; i++)
    {
        pointer[i] *= 2;
    }
}

void printArrayValues(int * pointer, int size, bool asCharacter = false){
    if (asCharacter){
        for (int i = 0; i < size; i++)
        {
            cout << char(pointer[i]) << endl;
        }
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            cout << pointer[i] << endl;
        }
    }
    
}

int main(){
    int * enteros;
    int sizeOfInt = 100;

    enteros = new int[sizeOfInt];

    for (int i = 0; i < sizeOfInt; i++)
    {
        enteros[i] = i + 97;
    }

    printArrayValues(enteros, sizeOfInt);
    printArrayValues(enteros, sizeOfInt, true);

    delete [] enteros;
}

