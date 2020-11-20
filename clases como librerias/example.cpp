#include "example.h"

#include<string>
#include<iostream>

using namespace std;

// here we add the code itself

myclass::myclass(int numberSet1){
    myclass::number1 = numberSet1;
}

void myclass::doAthing(int number){
    myclass::number2 = 200;
}

void myclass::printTheThing(){
    cout << number1 << endl;
}