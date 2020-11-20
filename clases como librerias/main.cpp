#include "example.h"

#include<string>
#include<iostream>

using namespace std;

int main(){
    myclass classyClass1 = myclass(20);
    classyClass1.number2 = 129837; 
    // note that I am unable to acces number1, or change it in any way

    myclass classyClass2 = myclass(54);
    classyClass2.number2 = 32468; 

    // here we call the print class that prints the private number
    classyClass1.printTheThing();
    classyClass2.printTheThing();

    // we can also print aditional thingys
    cout << classyClass1.number2 << " wow brudah " << classyClass2.number2 << endl;
}