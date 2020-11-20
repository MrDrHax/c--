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

void listsOfLists(){
    int ** theListOfLists; // the double ** makes a reference to a double thingy
    int sizeOfTheList [2] = {2,5}; // size of the list of lists on (a 1d list)

    theListOfLists = new int*[sizeOfTheList[0]]; // define the first thingy

    theListOfLists = new int*[sizeOfTheList[0]];  //aquí se reservan los renglones
    for(int i=0; i<sizeOfTheList[0];i++)
        theListOfLists[i] = new int[sizeOfTheList[1]];  //en cada renglón reservamos cuántas columnas habrá


    for(int i=0; i<sizeOfTheList[0];i++)
        delete [] theListOfLists[i];
    delete [] theListOfLists;
}